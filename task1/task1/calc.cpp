#include <iostream>

int getNum()
{
	std::cout << "Enter a number: ";
	int a = 0;
	std::cin >> a;
//	std::cout << "Enter second number: ";
//	int b = 0;
//	std::cin >> b;*/
	return a;
}

void printNum(double a)
{
	std::cout << a;

}

double sumNums(double a, double b)
{
	return a + b;
}

double mulNums(double a, double b)
{
	return a * b;
}