#include "iter.hpp"

template <typename T>
void iter(T *array, int len, void (*func)(T&)) {
    for (int i = 0; i < len; ++i) {
        func(array[i]);
    }
}

template <typename T>
void iter(T *array, int len, void (*func)(T)) {
    for (int i = 0; i < len; ++i) {
        func(array[i]);
    }
}

template void iter<int>(int *array, int len, void (*func)(int&));
template void iter<int>(int *array, int len, void (*func)(int));

template void iter<std::string>(std::string *array, int len, void (*func)(std::string&));
template void iter<std::string>(std::string *array, int len, void (*func)(std::string));
