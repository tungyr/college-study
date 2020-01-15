#include <iostream>
#include <string>
#include "func.h"



int convert(int number)
{
	int max = 256;
	int summ = 0;
	std::string bin = "";
	int reminder = 0;

	while (max != 1)
	{
		reminder = max % 2;
		std::string bin_new = std::to_string(reminder);
		bin = bin + reminder
		max = max / 2;
		

	


}