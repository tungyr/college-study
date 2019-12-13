#include <iostream>

int readNumber()
{
	std::cout << "Enter an integer: " << std::endl;
	int x = 0;
	std::cin >> x;

	return x;
}

int writeAnswer(int x, int y)
{
	std::cout << x + y << std::endl;

	return 0;
}