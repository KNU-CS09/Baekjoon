#include <iostream>

int main()
{
	while (1)
	{
		int n, x, num;

		std::cin >> n;

		std::cin >> x;

		std::cin.clear();
		for (int i = 0; i < n; i++)
		{
			std::cin >> num;
			if (num < x)
				std::cout << num << "\n";

			num = 0;
		}
	
		if (n >= 1 && x <= 10000)
			break;
	}

}