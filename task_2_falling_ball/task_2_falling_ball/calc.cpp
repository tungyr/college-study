#include <iostream>
#include "constants.h"

int height_calc(double height)
{
	double ball_fall = 1;
	int seconds = 0;
	double height_rest = height;
	

	while (height_rest > 0)
	{
		std::cout << "At " << seconds << " seconds, the ball is at height " << height_rest << " meters." << std::endl;
		seconds = seconds + 1;
		ball_fall = constants::gravity * seconds * seconds / 2;
		height_rest = height - ball_fall;
	}
	
	std::cout << "At " << seconds << " seconds, the ball is on the ground.";

	return 0;
		
}