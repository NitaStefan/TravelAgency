#include "Offer.h"
#include "OfferTest.h"
#include "DynamicArray.h"
#include "FilteringTest.h"
#include "DynamicArrayTest.h"
#include "FilteringCriteria.h"
#include "FilteringCriteriaAnd.h"
#include <iostream>
using namespace std;

void displayMenu() {
	cout << "0: Quit application\n";
	cout << "1: Add tourism offer\n";
	cout << "2: Display all tourism offers\n";
	cout << "3: Filter offers by price\n";
	cout << "4: Filter offers by type\n";
	cout << "5: Filter by any 2 criteria\n";
}
void run()
{
	Offer of1("235", "12-05-2022", "18-05-2022", "Cluj", "London", 250, cityBreak),
		of2("3476", "13-06-2023", "4-07-2023", "Bucharest", "Frankfurt", 190, allInclusive),
		of3("1122", "24-02-2024", "14-03-2024", "Iasi", "Paris", 330, cityBreak),
		of4("231", "11-05-2024", "23-05-2024", "Cluj", "Rome", 130, circuit),
		of5("668", "25-01-2023", "3-02-2023", "Luxemburg", "Tokyo", 510, cruise);
	DynamicArray<Offer> arr(100);
	arr.append(of1);
	arr.append(of2);
	arr.append(of3);
	arr.append(of4);
	arr.append(of5);
	displayMenu();
	int command;
	cin >> command;
	while(command)
	{
		if (command == 1)
		{
			string id, depLoc, desLoc, stDate, endDate;
			int price;
			theType type=circuit;
			cout << "id=";
			cin >> id;
			cout << "departure location=";
			cin >> depLoc;
			cout << "destination location=";
			cin >> desLoc;
			cout << "start date=";
			cin >> stDate;
			cout << "end date=";
			cin >> endDate;
			cout << "price=";
			cin >> price;
			Offer offer(id, stDate, endDate, depLoc, desLoc, price, type);
			arr.append(offer);
		}
		else if (command == 2)
		{
			cout << "length:" << arr.getLength() << endl;
			cout << arr << endl;
		}
		else if (command == 3)
		{
			int price;
			DynamicArray<Offer> res = arr;
			FilteringPrice fPrice;
			cout << "price=";
			cin >> price;
			fPrice.setPrice(price);
			res = fPrice.filter(res);
			cout << res;
		}
		else if (command == 4)
		{
			theType type;
			DynamicArray<Offer> res = arr;
			FilteringType fType;
			cout << "type=";
			cin >> type;
			fType.setType(type);
			res = fType.filter(res);
			cout << res;
		}
		else if (command == 5)
		{
			DynamicArray<Offer> res = arr;
			FilteringCriteriaAnd fAnd;
			FilteringPrice fPrice;
			FilteringType fType;
			FilteringCriteriaDeparture fDep;
			fAnd.setCrt1(nullptr);
			fAnd.setCrt2(nullptr);
			cout << "First criterion:\n1-by price\n2-by type\n3-by departure location\n";
			int cr1, cr2;
			cin >> cr1;
			if (cr1 == 1)
			{
				int price;
				cout << "price=";
				cin >> price;
				fPrice.setPrice(price);
				fAnd.setCrt1(&fPrice);
			}
			else if (cr1 == 2)
			{
				theType t;
				cout << "type=";
				cin >> t;
				fType.setType(t);
				fAnd.setCrt1(&fType);
			}
			else if (cr1 == 3)
			{
				string s;
				cout << "departure location=";
				cin >> s;
				fDep.setDep(s);
				fAnd.setCrt1(&fDep);
			}
			cout << "Second criterion:\n1-by price\n2-by type\n3-by departure location\n";
			cin >> cr2;
			if (cr2 == 1)
			{
				int price;
				cout << "price=";
				cin >> price;
				fPrice.setPrice(price);
				fAnd.setCrt2(&fPrice);
			}
			else if (cr2 == 2)
			{
				theType t;
				cout << "type=";
				cin >> t;
				fType.setType(t);
				fAnd.setCrt2(&fType);
			}
			else if (cr2 == 3)
			{
				string s;
				cout << "departure location=";
				cin >> s;
				fDep.setDep(s);
				fAnd.setCrt2(&fDep);
			}
			res = fAnd.filter(res);
			cout << res;
		}
		cout << "command=";
		cin >> command;
	}
}

int main() {
	
	run();
	/*DynamicArray arr;
	cout << arr.getLength() << endl;
	arr.append(Offer("56", "bt", "cj", "2001", "2003", 15,circuit));
	cout << arr.getLength() << endl;*/
	

	return 0;
}