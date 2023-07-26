#pragma once
#include "Node.h"
using namespace std;

class LinkedList
{
private:
public:
	void printList(Node* h);
	void insertAtFront(Node** h, int newValue);
	void insertAtEnd(Node** h, int newValue);
	void insertAfter(Node** h);
};