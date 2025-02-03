#ifndef ITER_HPP
#define ITER_HPP

#include <string>

template <typename T>
void iter(T *array, int len, void (*func)(T&));

template <typename T>
void iter(T *array, int len, void (*func)(T));

#endif
