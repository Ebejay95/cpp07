# C++ Module 07

**C++ Templates**

This module focuses on the implementation and usage of templates in C++ to create generic, reusable components.

## Structure

### ex00/ - Start with a Few Functions
- **whatever.{hpp}**: Implements the following function templates:
  - `swap`: Swaps the values of two arguments.
  - `min`: Returns the smaller of two arguments (returns the second if they are equal).
  - `max`: Returns the larger of two arguments (returns the second if they are equal).
- **main.cpp**: Tests for the function templates with various types.

### ex01/ - Iter
- **iter.{hpp}**: Implements the `iter` function template that:
  - Takes a pointer to an array, its size, and a function to apply to each element.
  - Works with any array type and supports function templates as the third parameter.
- **main.cpp**: Tests the `iter` template with different array types and functions.

### ex02/ - Array
- **Array.{hpp}**: Implements a class template `Array` with:
  - Default constructor: Creates an empty array.
  - Parameterized constructor: Creates an array with `n` default-initialized elements.
  - Copy constructor and assignment operator: Ensure deep copy behavior.
  - Subscript operator `[]`: Provides access to elements with bounds checking.
  - `size()`: Returns the number of elements in the array.
  - Throws `std::exception` for out-of-bounds access.
- **Array.tpp**: Optional file for template implementation.
- **main.cpp**: Tests the `Array` template with different data types and scenarios.

## Features

- **Function Templates**: Implements reusable generic functions (`swap`, `min`, `max`, and `iter`).
- **Class Templates**: Defines a generic array class with robust functionality.
- **Dynamic Memory Management**: Utilizes `new[]` for array memory allocation.
- **Exception Handling**: Ensures safe access with meaningful error messages for invalid operations.
