//#include "FilteringTest.h"
//#include "Offer.h"
//#include "DynamicArray.h"
//#include "FilteringCriteria.h"
//#include <cassert>
//#include <iostream>
//void FilteringTest::creationTests()
//{
//	Offer of1("235", "12-05-2022", "18-05-2022", "Cluj", "London", 250, cityBreak),
//		of2("3476", "13-06-2023", "4-07-2023", "Bucharest", "Frankfurt", 190, allInclusive),
//		of3("1122", "24-02-2024", "14-03-2024", "Iasi", "Paris", 330, cityBreak),
//		of4("231", "11-05-2024", "23-05-2024", "Cluj", "Rome", 130, circuit),
//		of5("668", "25-01-2023", "3-02-2023", "Luxemburg", "Tokyo", 510, cruise);
//	DynamicArray arr(100), arr2, arr3, arr4;
//	FilteringPrice::setPrice(200);
//	FilteringType::setType(cityBreak);
//	arr.append(of1);
//	arr.append(of2);
//	arr.append(of3);
//	arr.append(of4);
//	arr.append(of5);
//	arr2 = FilteringPrice::filter(arr);
//	arr3 = FilteringType::filter(arr);
//	arr4 = FilteringCriteriaTypeAndPrice::filter(arr);
//	assert(arr2.getLength() == 2);
//	assert(arr3.getLength() == 2);
//	assert(arr4.getLength() == 0);
//
//}
//void FilteringTest::runAllTests()
//{
//	cout << "FilteringCriteria.h test begin\n";
//	creationTests();
//	cout << "FilteringCriteria.h test end\n";
//}
