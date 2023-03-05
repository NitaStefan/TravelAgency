#pragma once
#include <string>
using namespace std;
enum theType
{
	circuit,
	cityBreak,
	cruise,
	allInclusive
};
istream& operator>>(istream& in, theType& type);
class Offer
{
public:
	Offer();
	Offer(string id , string stDate , string endDate , string depLoc, string desLoc , int price , theType type );
	
	//Getters
	string getId() const;
	string getDepLoc() const;
	string getDesLoc() const;
	int getPrice() const;
	theType getType() const;
	string getStrType() const;

	//Setters
	void setId(string);
	void setDepLoc(string);
	void setDesLoc(string);
	void setPrice(int);
	string toString() const;
	friend ostream& operator<<(ostream& os, const Offer& obj);
private:
	string id, depLoc, desLoc,stDate,endDate;
	int price;
	theType type;
};

