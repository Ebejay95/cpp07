#include "whatever.hpp"

template <typename T>
void swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T a, T b) {
	return (b < a) ? b : a;
}

template <typename T>
T max(T a, T b) {
	return (b > a) ? b : a;
}

template void swap<int>(int &a, int &b);
template int min<int>(int a, int b);
template int max<int>(int a, int b);

template void swap<std::string>(std::string &a, std::string &b);
template std::string min<std::string>(std::string a, std::string b);
template std::string max<std::string>(std::string a, std::string b);