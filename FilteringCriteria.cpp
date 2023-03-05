#include "FilteringCriteria.h"
#include "FilteringCriteriaAnd.h"
DynamicArray<Offer> FilteringCriteria::filter(DynamicArray<Offer>& data)
{
	return data;
}
DynamicArray<Offer> FilteringPrice::filter(DynamicArray<Offer>& data)
{
	DynamicArray<Offer> res = data;
	int i, length = res.getLength();
	for (i = 0; i < length; i++)
		if (res.get(i).getPrice() >= price)
			res.remove(i), i--, length--;
	return res;
}
void FilteringPrice::setPrice(int p)
{
	price = p;
}
DynamicArray<Offer> FilteringType::filter(DynamicArray<Offer>& data)
{
	DynamicArray<Offer> res = data;
	int i, length = res.getLength();
	for (i = 0; i < length; i++)
		if (res.get(i).getType()!= type)
			res.remove(i), i--, length--;
	return res;
}
void FilteringType::setType(theType t)
{
	type = t;
}
void FilteringCriteriaDeparture::setDep(string str)
{
	dep = str;
}
DynamicArray<Offer> FilteringCriteriaDeparture::filter(DynamicArray<Offer>& data)
{
	DynamicArray<Offer> res=data;
	int i, length = res.getLength();
	for (i = 0; i < length; i++)
		if (dep.compare(res.get(i).getDepLoc()) != 0)
			res.remove(i), i--, length--;
	return res;
}
DynamicArray<Offer> FilteringCriteriaAnd::filter(DynamicArray<Offer>& arr)
{
	DynamicArray<Offer> res = arr;
	if (crt1 != nullptr)
		res = crt1->filter(res);
	if (crt2 != nullptr)
		res = crt2->filter(res);
	return res;
}
