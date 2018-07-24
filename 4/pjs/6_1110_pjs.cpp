#include <iostream>

int main()
{

		int n;
		std::cin >> n;

		int first,second;
		int flag = 1;

		if ((n / 10) == 0)
		{
			first = 0;
			second = n;
		}

		first = n / 10;
		second = n % 10;


		while (1)
		{
			int temp = 0;
			temp = first;
			first = second;
			second = (temp + second) % 10;

			if ((10*first + second) == n)
				break;
			
		
			flag++;
		}

		std::cout << flag << "\n";

}