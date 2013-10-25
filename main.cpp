#include <iostream>
#include "1.h"

int main() {
	List A;

	A.add(1);
	A.print();
	A.add(2);
	A.print();
	A.add(3);
	A.print();
	A.add(4);

	std::cout << (A[0]) << std::endl;

	A[0] = 5;

	std::cout << (A[0]) << std::endl;

	//std::cout << (A[1]) << std::endl;
	

	//A.print();

	/*std::cout << (A[0]) << std::endl;
	std::cout << (A[1]) << std::endl;

	A[1] = 3;

	std::cout << (A[1]) << std::endl;*/
	return 0;
}