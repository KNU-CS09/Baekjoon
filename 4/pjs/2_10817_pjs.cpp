#include <iostream>

int main()
{
	int a, b, c;

	while (1)
	{
		std::cin >> a;
		std::cin >> b;
		std::cin >> c;

		if (1 <= a && 1 <= b && c <= 100)
			break;
	}
	if (a <= b && a <= c)
	{
		if (b <= c)
			std::cout << b << "\n";
		else
			std::cout << c << "\n";
	}
	else if (b <= a && b <= c)
	{
		if (a <= c)
			std::cout << a << "\n";
		else
			std::cout << c << "\n";
	}
	else if (c <= a && c <= b)
	{
		if (a <= b)
			std::cout << a << "\n";
		else
			std::cout << b << "\n";
	}

}