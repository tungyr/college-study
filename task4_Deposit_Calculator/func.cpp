#include <iostream>
#include "func.h"
using namespace std;

int deposit_calc(int deposit, int deposit_time)
{
int data[3];
int month_revenue;
int whole_revenue;
int revenue_and_deposit;
month_revenue = data[0] = deposit * (5 / 100) / 365 * 30;
whole_revenue = data[1] = month_revenue * deposit_time;
revenue_and_deposit = data[2] = deposit + whole_revenue;
std::cout << data;

return data[0], data[1], data[2];
}