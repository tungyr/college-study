#include <iostream>
#include "Header.h"

int main()
{
int input1 = getUserInput();

int op = getMathematicalOperation();

int input2 = getUserInput();

int result = calculateResult(input1, op, input2);

printResult(result);

}