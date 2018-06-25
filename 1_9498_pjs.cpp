#include <iostream>

int main()
{
	int a;
	while (1)
	{
		std::cin >> a;

		if (0 < a || a <= 100)
			break;
	}
	if (90 <= a && a<= 100) 
	{
		std::cout << "A" << "\n";
	}
	else if (80 <= a && a <= 89)
	{
		std::cout << "B" << "\n";
	}
	else if (70 <= a && a <= 79)
	{
		std::cout << "C" << "\n";
	}
	else if (60 <= a && a <= 69)
	{
		std::cout << "D" << "\n";
	}else
		std::cout << "F" << "\n";

	
}