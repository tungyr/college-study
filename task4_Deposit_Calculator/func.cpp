#include <iostream>
#include "func.h"
using namespace std;

int deposit_calc(int deposit, int deposit_time)
{
int month_revenue;
int whole_revenue;
int revenue_and_deposit;
month_revenue = deposit * (5 / 100) / 365 * 30;
whole_revenue = month_revenue * deposit_time;
revenue_and_deposit = deposit + whole_revenue;

return month_revenue, whole_revenue, revenue_and_deposit;
}