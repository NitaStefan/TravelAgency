#pragma once
#include "DynamicArray.h"
#include "Offer.h"
#include <string>

// you can add all your filtering classes in this module
class FilteringCriteria
{
public:
	virtual DynamicArray<Offer> filter(DynamicArray<Offer>& data);
};

class FilteringPrice : public FilteringCriteria
{
private:
	int price;

public:
	void setPrice(int);
	DynamicArray<Offer> filter(DynamicArray<Offer>& data);
};

class FilteringType : public FilteringCriteria
{
private:
	theType type;
public:
	void setType(theType);
	DynamicArray<Offer> filter(DynamicArray<Offer>& data);
};

class FilteringCriteriaDeparture :public FilteringCriteria
{
private:
	string dep;
public:
	void setDep(string);
	DynamicArray<Offer> filter(DynamicArray<Offer>& data);
};