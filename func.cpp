#include <iostream>
#include "sum.h"

int sum(int* array, int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += array[i];
	}
	return sum;
}

void Print(int* array, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << array[i] << ' ';
	}
}