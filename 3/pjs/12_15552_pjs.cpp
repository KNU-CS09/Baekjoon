#include <iostream>


void print15552()
{

	int t;
	int a;
	int b;
	std::cin.tie(NULL);

	while (1)
	{
		std::cin >> t;
		std::cin.clear();
		if ( t <= 1000000)
			break;
	}

	for (int i = 0; i < t; i++)
	{
		while (1)
		{
			std::cin >> a;
			std::cin.clear();
			if (0 < a <= 1000)
				break;
		}
		while (1)
		{
			std::cin >> b;
			std::cin.clear();
			if (0 < a <= 1000)
				break;
		}
		std::cout << a + b << "\n";
		a, b = 0;
	}
}