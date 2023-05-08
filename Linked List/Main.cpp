#include <iostream>
#include "LinkedList.h"
using  namespace std;

int main(int argc, char** argv) {
	
	LinkedList list1;
	
	list1.insertToHead(10);
	list1.insertToTail(30);
	list1.insertToTail(20);
	list1.insertAfter(30, 25);
	list1.deleteFromTail();
	list1.deleteByValue(30); 
	
	cout << "head: " << list1.head->value << endl;
	cout << "tail: " << list1.tail->value << endl;
	cout << endl;
	
	cout << "Linked List Node";
	list1.printAll();
	cout << endl;
	
	LinkedList list2;
	list2.insertToHead(24);
	list2.insertToHead(30);
	list2.insertAfter(24, 26);
	list2.deleteFromHead();
	
	cout << "head: " << list2.head->value << endl;
	cout << "tail: " << list2.tail->value << endl;
	cout << endl;
	
	cout << "Linked List Node";
	list2.printAll();
	cout << endl;
	
	return 0;
} // main
