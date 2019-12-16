#include <iostream>
#include "calc.h"

int main()
{
	std::cout << "Enter the initial height of the tower: ";
	double height = 0;
	std::cin >> height;
	height_calc(height);

	return 0;
}

