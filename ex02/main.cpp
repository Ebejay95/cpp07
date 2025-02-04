#include "./Array.hpp"
#include <iostream>
#include <string>

template<typename T>
void logArray(const Array<T>& arr, const std::string& name) {
	std::cout << name << " [";
	try {
		for (size_t i = 0; i < arr.size(); i++) {
			std::cout << arr[i];
			if (i < arr.size() - 1)
				std::cout << ", ";
		}
	}
	catch (const std::exception& e) {
		std::cout << "Error while logging: " << e.what();
	}
	std::cout << "]" << std::endl;
}

int main(void)
{
	// Test 1: Construction & basic operations
	std::cout << "\n=== Test 1: Basic Operations ===" << std::endl;
	Array<std::string> beers(3);
	beers[0] = "ipa";
	beers[1] = "guiness";
	beers[2] = "stout";
	logArray(beers, "Beers");

	// Test 2: Empty array
	std::cout << "\n=== Test 2: Empty Array ===" << std::endl;
	Array<std::string> wines;
	logArray(wines, "Wines");

	// Test 3: Copy constructor
	std::cout << "\n=== Test 3: Copy Constructor ===" << std::endl;
	Array<std::string> beersCopy(beers);
	logArray(beersCopy, "Beers Copy (before)");
	beersCopy[0] = "pale ale";
	logArray(beers, "Original Beers");
	logArray(beersCopy, "Modified Copy");

	// Test 4: Assignment operator
	std::cout << "\n=== Test 4: Assignment Operator ===" << std::endl;
	Array<std::string> moreBeers = beers;
	moreBeers[1] = "porter";
	logArray(beers, "Original");
	logArray(moreBeers, "Assigned and Modified");

	// Test 5: Exception handling
	std::cout << "\n=== Test 5: Exception Handling ===" << std::endl;
	try {
		beers[5] = "error beer";
	}
	catch (const std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	// Test 6: Different types
	std::cout << "\n=== Test 6: Different Types ===" << std::endl;
	Array<int> numbers(4);
	for (unsigned int i = 0; i < 4; i++)
		numbers[i] = i * i;
	logArray(numbers, "Square Numbers");

	// Test 7: Empty array bounds
	std::cout << "\n=== Test 7: Empty Array Bounds ===" << std::endl;
	try {
		wines[0] = "merlot";
	}
	catch (const std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	// Test 8: Const array
	std::cout << "\n=== Test 8: Const Array ===" << std::endl;
	const Array<std::string> constBeers(beers);
	logArray(constBeers, "Const Beers");

	return (0);
}