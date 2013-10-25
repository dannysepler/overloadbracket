#include <iostream>
#include "1.h"

bool List::empty() {
	if ( head == NULL )
		return true;
	return false;
}

int List::add( int value ) {
	if ( empty() ) {
		Node* A = new Node(value);
		head = A;
		return value;
	}

	else {
		Node* temp = head;
		while ( temp->next != NULL ) {
			temp = temp->next;
		}

		Node* node = new Node(value);
		temp->next = node;
		return value;
	}
}

void List::print() {
	Node* temp = head;
	while ( temp->next != NULL) {
		std::cout<< temp->data << " ";
		temp = temp->next;
	}

	if (head != NULL)
		std::cout << temp->data;

	std::cout << std::endl;
}

int& List::operator[] ( int val ) {
	Node* temp = head;
	int count = 0;

	while (temp->next != NULL) {
		if (count == val) {
			return temp->data;
		}
		count++;
		temp = temp->next;
	}

	if (count == val)
		return temp->data;

	std::cout<<"Sorry, that value is not here..."<<std::endl;
	int ret = 0;
	return ret;
}