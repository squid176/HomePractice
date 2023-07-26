#include "LinkedList.h"
#include "Node.h"
#include <iostream>
using namespace std;

int main()
{
	Node* head = new Node;
	Node* second = new Node;
	Node* third = new Node;
	
	LinkedList l;

	head->value = 1;
	head->Next = second;
	second->value = 2;
	second->Next = third;
	third->value = 3;
	third->Next = NULL;

	l.insertAfter(&head);
	l.insertAtFront(&head, 0);
	l.insertAtFront(&head, -1);
	l.insertAtFront(&head, -2);
	l.insertAtFront(&head, -3);
	l.insertAtFront(&head, -4);
	l.insertAtEnd(&head, 4);
	l.printList(head);

	return 0;
}