#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>
#include <cstddef>
#include <sstream>

template<typename T>
class Array {
	private:
		T* array_pointer;
		size_t array_size;

	public:
		Array() : array_pointer(NULL), array_size(0) {}

		Array(unsigned int n) : array_pointer(new T[n]), array_size(n) {}

		Array(const Array& other) : array_pointer(new T[other.array_size]), array_size(other.array_size) {
			std::copy(other.array_pointer, other.array_pointer + array_size, array_pointer);
		}

		Array& operator=(const Array& other) {
			if (this != &other) {
				T* temp = new T[other.array_size];
				std::copy(other.array_pointer, other.array_pointer + array_size, temp);
				delete [] array_pointer;
				array_pointer = temp;
				array_size = other.array_size;
			}
			return *this;
		}

		~Array() {
			delete [] array_pointer;
		}

		T& operator[](unsigned int index) {
			if (index >= array_size)
				throw OutOfBoundException(index, array_size);
			return array_pointer[index];
		}

		const T& operator[](unsigned int index) const {
			if (index >= array_size)
				throw OutOfBoundException(index, array_size);
			return array_pointer[index];
		}

		size_t size() const {
			return array_size;
		}

		class OutOfBoundException : public std::exception {
			private:
				std::string message;

			public:
				OutOfBoundException(unsigned int requested, size_t max) {
					std::stringstream ss;
					ss << "Index " << requested << " out of bounds. Array size is " << max;
					message = ss.str();
				}

				// Füge den Destruktor mit throw() Spezifikation hinzu
				virtual ~OutOfBoundException() throw() {}

				virtual const char* what() const throw() {
					return message.c_str();
				}
		};
};

#endif