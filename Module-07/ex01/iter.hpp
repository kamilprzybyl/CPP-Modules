#pragma once

#include <iostream>

template<typename T>
void	iter(T *arr, size_t n, void (*f)(T&)) {

	for (size_t i = 0; i < n; i++) {
		f(arr[i]);
	}
}

