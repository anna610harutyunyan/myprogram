#include <iostream>
#include "sum.h"


int main(int argc, char** argv)
{
	int size = 0;
	std::cout << "Please enter the size of the array:_ ";
	std::cin >> size;
	int* array = new int[size];

	std::cout << "Please, fill the array:_\n";

	for (int i = 0; i < size; ++i)
	{
		std::cout << "array[" << i << "]= ";
		std::cin >> array[i];
		std::cout <<std::endl;
	}

	std::cout << "You have entered the following array:_\n ";
	Print(array, size);
	std::cout << std::endl;
	std::cout << "The sum of the elements in array will be_ " << sum(array, size);
	return 0;
}