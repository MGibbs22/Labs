#pragma once

#include "Node.h"
#include <cstddef>



class List
{
private:
	Node* head;
	Node* tail;
	double data;
	Node* next;

public:
	
	List(void) { head = NULL; tail = NULL; } //Constructor
	~List(void); //Destructor

	bool IsEmpty() { return head == NULL; }
	Node* InsertNode(int index, double x);
	int FindNode(double x);
	int DeleteNode(double x);
	void DisplayList(void);
};

