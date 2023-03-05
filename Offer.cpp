#include "Offer.h"
#include <string>
#include <iostream>
using namespace std;

Offer::Offer()
{
	stDate = "";
	endDate = "";
	id = "";
	desLoc = "";
	depLoc = "";
	price = 0;
	type = circuit;
}

Offer::Offer(string id, string stDate,string endDate, string depLoc, string desLoc, int price, theType t)
{
	this->stDate = stDate;
	this->endDate = endDate;
	this->id = id;
	this->desLoc = desLoc;
	this->depLoc = depLoc;
	this->price = price;
	this->type = t;
}
string Offer::toString() const
{
	string s= getStrType()+" "+stDate + " -> " + endDate + ", from " + depLoc + " to " + desLoc + " for " + to_string(price) + "$ (id: " + id + ")";
	return s;
}
string Offer::getId() const
{
	return id;
}
string Offer::getDepLoc() const
{
	return depLoc;
}
string Offer::getDesLoc() const
{
	return desLoc;
}
int Offer::getPrice() const
{
	return price;
}
theType Offer::getType() const
{
	return type;
}
string Offer::getStrType() const
{
	if (type == 0)
		return "circuit";
	else if (type == 1)
		return "city break";
	else if (type == 2)
		return "cruise";
	else if (type == 3)
		return "all-inclusive";
}
void Offer::setId(string s)
{
	id = s;
}
void Offer::setDepLoc(string s)
{
	depLoc = s;
}
void Offer::setDesLoc(string s)
{
	desLoc = s;
}
void Offer::setPrice(int p)
{
	price = p;
}
ostream& operator<<(ostream& os, const Offer& obj)
{
	string s = obj.toString();
	os << s;
	return os;
}
istream& operator>>(istream& in, theType& type)
{
	string s;
	in >> s;
	if (s == "circuit")
		type = circuit;
	else if (s == "cityBreak")
		type = cityBreak;
	else if (s == "cruise")
		type = cruise;
	else if (s == "allInclusive")
		type = allInclusive;
	return in;
}
