#include <iostream>

int height_calc(double height)
{
	double ball_fall = 1;
	int second = 0;
	double height_rest = 1;

	std::cout << "At "<< second << " seconds, the ball is at height "<< height << " meters." << std::endl;

	//if (height == 0)
		//std::cout << "wrong height!";
	//while (height - (9.8 * (second + 1) * (second + 1) / 2) > 0 && height != 0)

	while (height > 0)
	{
		second = second + 1;
		ball_fall = 9.8 * second * second / 2;
		height_rest = height - ball_fall;
		std::cout << "At " << second << " seconds, the ball is at height " << height_rest << " meters." << std::endl;
		height = (height - (9.8 * (second + 1) * (second + 1) / 2));
	}
	std::cout << "At " << second << " seconds, the ball is on the ground.";

	return 0;
		
}