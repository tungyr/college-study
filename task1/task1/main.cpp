#include <iostream>
#include "calc.h"

int main()
{
	int a = 0;
	a = getNum();
	int b = 0;
	b = getNum();
	
	//mulNums(a, b);

	std::cout << "Summ: ";
	printNum(sumNums(a, b));

	std::cout << std::endl;

	std::cout << "Multiply: ";
	printNum(mulNums(a, b));


	return 0;

}
