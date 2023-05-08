#include <iostream>
#include "LinkedList.h"
using namespace std;

void LinkedList::insertToHead(int input){
	
	Node *newNode = new Node();
	newNode->value = input;
	
	newNode->next = head;
	head = newNode;
	
	if (tail==NULL)
		tail = head;
}

void LinkedList::insertToTail(int input){
	
    Node *newNode = new Node();
    newNode->value = input;
    newNode->next = NULL;

    if (tail==NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void LinkedList::insertAfter(int existInput, int input) {
    Node *currentNode = head;

    while (currentNode != NULL && currentNode->value != existInput) {
        currentNode = currentNode->next;
    }

    if (currentNode != NULL) {
        Node *newNode = new Node();
        newNode->value = input;

        newNode->next = currentNode->next;
        currentNode->next = newNode;

        if (newNode->next == NULL) {
            tail = newNode;
        }
    } else {
    	
        return;
    }
}

void LinkedList::deleteFromHead() {
    if (head == NULL) {
        return;
    }

    Node *nodeDihapus = head;
    head = head->next;

    if (head == NULL) {
        tail = NULL;
    }

    delete nodeDihapus;
}

void LinkedList::deleteFromTail() {
    if (tail == NULL) {    	
        return;
    }

    if (head == tail) {
        delete tail;
        head = tail = NULL;
        return;
    }

    Node *nodeBlkngTail = head;
    while (nodeBlkngTail->next != tail) {
        nodeBlkngTail = nodeBlkngTail->next;
    }

    delete tail;
    tail = nodeBlkngTail;
    tail->next = NULL;
}

void LinkedList::deleteByValue(int value) {
    Node *nodeSaatIni = head;
    Node *nodeSebelumnya = NULL;

    while (nodeSaatIni != NULL && nodeSaatIni->value != value) {
        nodeSebelumnya = nodeSaatIni;
        nodeSaatIni = nodeSaatIni->next;
    }

    if (nodeSaatIni == NULL) {
        return;
    }

    if (nodeSaatIni == head) {
        head = head->next;
    } else if (nodeSaatIni == tail) {
        tail = nodeSebelumnya;
        tail->next = NULL;
    } else {
        nodeSebelumnya->next = nodeSaatIni->next;
    }

    delete nodeSaatIni;
}

void LinkedList::printAll(){
	
	Node *tmp = head;
	while (tmp!=NULL){
		cout << tmp->value << "->";
		tmp = tmp->next;
	}
	cout << endl;
} // function
