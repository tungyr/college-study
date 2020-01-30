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

	bin_new = ""; 
	counter = 0;

	int len = bin.length();
	while (counter != len)
	{
		std::cout << bin[counter];
		bin_new = bin_new + bin[counter];
		if (counter == 4)
			bin_new = bin_new + ' ';
	}


	//std::string bin_final = "";
	//for (int j = 0; j < (len + 1); j++)
	//	if (j == 4){
	//		bin_final = bin_final + " ";
	//	}
	//	else{
	//		bin_final = bin_final + bin[j];
	//	}

	//std::cout << bin;

	return bin_new;

	
} 