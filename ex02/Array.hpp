#ifndef ARRAY_HPP
# define ARRAY_HPP

class Array {
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();

		T& operator[](unsigned int index);
		size_t size() const;
		class OutOfBoundExeption : public std::exception {
			const char* what() const throw();
		};
}

#endif