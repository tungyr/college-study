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

		if (counter == 4)
		{
			bin = bin + " ";
		}
		
	}

	int len = bin.length();
	int n = len - 1;
	for (int i = 0; i < (len / 2); i++)
		swap(bin[i], bin[n]);
		n = n - 1;

	//std::cout << bin;

	return bin;

	
} 