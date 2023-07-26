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

void LinkedList::insertAfter(Node** h)
{
	int userE = 0;
	int userI = 0;
	char Continue = ' ';
	Node* head0 = *h;

	cout << "Would you like to edit Linked List (y/n)?" << endl;
	cin >> Continue;

	if (Continue == 'y' || Continue == 'Y')
	{
		cout << "After which element would you like to add the linked list (1-3)?" << endl;
		cin >> userE;
		cout << "What would you like the value to be for this element (a whole number)?" << endl;
		cin >> userI;

		Node* newNode = new Node;

		for (int i = 0; i < (userE - 1); i++)
		{
			if ((*h)->Next == NULL)
			{
				break;
			}
			*h = (*h)->Next;
		}

		if ((*h)->Next == NULL)
		{
			newNode->Next = NULL;
		}
		else
		{
			newNode->Next = (*h)->Next;
		}

		newNode->value = userI;

		(*h)->Next = newNode;
		*h = head0;
	}

	else if (Continue != 'n' && Continue != 'N')
	{
		cout << "ERROR: Invalid input!" << endl;
		cout << "Please enter a y for yes or an n no" << endl;
		insertAfter(h);
	}
}
