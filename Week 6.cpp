// Week 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "List.h"
int main()
{
	List list;
	list.addItem(50);
	list.addItem(15);
	list.addItem(28);
	list.addItem(1);
	list.addItem(23);
	list.addItem(22);

	list.sortList();
}
