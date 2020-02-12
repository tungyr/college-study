#include <iostream>
#include "func.h"

int main()
{
	std::cout << "Enter an deposit amount: ";
	int deposit;
	std::cin >> deposit;
	std::cout << "How many month for deposit: ";
	int deposit_time;
	std::cin >> deposit_time;

	std::cout << "Monthly revenue from deposit "    << deposit_calc(deposit, deposit_time) << std::endl;
	std::cout << "Whole time revenue from deposit " << deposit_calc(deposit, deposit_time) << std::endl;
	std::cout << "Whole revenue plus deposit body " << deposit_calc(deposit, deposit_time) << std::endl;

}
