#ifndef TestSuite_H
#define TestSuite_H

#include <iostream>
#include "LinkedListOfInts.h"
class TestSuite
{
	public:

	TestSuite();
	int numPass;
	void runTests();
	bool emptyListSizeTest();
	bool addBackSize();
	bool addFrontSize();
	bool removeBackOnEmpty();
	bool removeFrontOnEmpty();
	bool removeBackSize();
	bool removeFrontSize();
	bool isEmptyOnEmpty();
	bool isEmptyOnOne();
	bool searchOnEmpty();
	bool searchOnOne();
	bool destructor();
	bool remBack();
	bool remFront();
	bool adBack();
	bool adFront();
	std::string boolToPassFail(bool pf);



};
#endif
