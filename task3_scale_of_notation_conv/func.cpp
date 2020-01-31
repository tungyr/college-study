#include <iostream>
#include <string>
#include "func.h"
using namespace std;



string convert(int number)
{
	std::string bin = "";
	std::string bin_new = "";
	int reminder = 0;
	bool zero_loop = 1;
	int counter = 0;

	while (number + zero_loop > 0)
	{
		reminder = number % 2;
		std::string bin_new = std::to_string(reminder);
		bin = bin + bin_new;
		number = number / 2;
		//std::cout << bin_new;
		zero_loop = 0;
		counter++;


	}

	counter = bin.length() - 1;
	bin_new = bin[counter];

	
	while (counter != 0)
	{
		bin_new = bin_new + bin[counter - 1];
		if (counter + 3 == bin.length())
			bin_new = bin_new + ' ';
		counter -= 1;
	}

	return bin_new;
		
} 