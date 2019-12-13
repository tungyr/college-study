#include <iostream>

int getUserInput() {
	std::cout << "Please enter an integer: ";
	int value;
	std::cin >> value;
	return value;
}


int getMathematicalOperation() 
{
	std::cout << "Enter which operator you want (1 = +, 2 = -, 3 = *, 4 = /): ";
	int op;
	std::cin >> op;

	return op;
}


int calculateResult(int x, int op, int y)
{
	if (op == 1)
		return x + y;
	if (op == 2)
		return x - y;
	if (op == 3)
		return x * y;
	if (op == 4)
		return x / y;

	return -1;
}


void printResult(int result)
{
	std::cout << "Your result is: " << result << std::endl;
}
