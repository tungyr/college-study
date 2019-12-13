#include <iostream>
#include "add.h"
#include "add.cpp"
int main()
{
	int x = getInteger();
	int y = getInteger();
	std::cout << x << " + " << y << " is " << x + y << '\n';

	std::cout << "The sum of 3 and 4 is " << add(3, 4) << std::endl;
	return 0;
}