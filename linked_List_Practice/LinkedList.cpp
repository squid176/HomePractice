#include "LinkedList.h"
#include "Node.h"
#include <iostream>

void LinkedList::printList(Node* head0)
{
	while (head0 != NULL)
	{
		cout << head0->value << endl;
		head0 = head0->Next;
	}
}

void LinkedList::insertAtFront(Node** h, int newValue) // this is a pointer to pointer because the address of head is pointing to the address of the new Node allocated in memory
{
	Node* newNode = new Node();

	newNode->value = newValue;
	newNode->Next = *h; // this will then be the address of the the node allocated by head pointer when derefrenced

	*h = newNode;
}

void LinkedList::insertAtEnd(Node** h, int newValue)
{
	Node* newNode = new Node();
	newNode->value = newValue;
	newNode->Next = NULL;

	if (*h == NULL)
	{
		*h = newNode;

		return;
	}

	Node* last = *h;

	while (last->Next != NULL)
	{
		last = last->Next;
	}

	last->Next = newNode;

}
