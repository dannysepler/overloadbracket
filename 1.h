#ifndef _1_H_
#define _1_H_

class List {
	struct Node {
		int data;
		Node* next;

		Node(): next(NULL) {}

		Node( int value ): data(value), next(NULL) {}
	};

	public:
		Node* head;

		bool empty();
		int add( int value );
		void print();

		int& operator[] ( int val );
};

#endif