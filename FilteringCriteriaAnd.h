#pragma once
#include "FilteringCriteria.h"

class FilteringCriteriaAnd :public FilteringCriteria
{
private:
	FilteringCriteria* crt1;
	FilteringCriteria* crt2;
public:
	void setCrt1(FilteringCriteria* c1) { crt1 = c1; }
	void setCrt2(FilteringCriteria* c2) { crt2 = c2; }
	FilteringCriteria* getCrt1() const { return crt1; }
	FilteringCriteria* getCrt2() const { return crt2; }
	DynamicArray<Offer> filter(DynamicArray<Offer>& arr);
};