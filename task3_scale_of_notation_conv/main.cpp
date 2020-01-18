#include <iostream>
#include "func.h"

int main()
{
    std::cout << "Enter an integer: ";
	int number;
	std::cin >> number;
	std::cout << "Число " << number << " = " << convert(number);
		
}

