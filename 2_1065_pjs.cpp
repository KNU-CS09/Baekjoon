#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	
	int h;
	int t;
	int n;
	int count = 0;
	
	if (a / 100 > 0)
	{
		while (a >= 100)
		{
			h = a / 100;
			t = (a - (100 * h)) / 10;
			n = (a - (100 * h) - (10 * t));

			if ((h - t) == (t - n))
				count++;

			a--;
		}
		count += 99;
		std::cout << count << "\n";
	}
	else if (a < 100)
		std::cout << a << "\n";
	
}