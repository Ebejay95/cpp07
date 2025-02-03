#include <iostream>
#include "iter.hpp"

void print(int &x) {
	std::cout << x << " ";
}

void addFour(int &x) {
	x = x + 4;
}

void printCopy(int x) {
	std::cout << x << " ";
}

void addFourCopy(int x) {
	x = x + 4;
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int len = sizeof(arr) / sizeof(arr[0]);
	std::cout << std::endl;

	std::cout << "by refrence:" << std::endl;
	iter(arr, len, print);
	std::cout << std::endl;

	iter(arr, len, addFour);
	iter(arr, len, print);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "by copy:" << std::endl;
	iter(arr, len, printCopy);
	std::cout << std::endl;

	iter(arr, len, addFourCopy);
	iter(arr, len, printCopy);
	std::cout << std::endl;
	std::cout << std::endl;

	return 0;
}