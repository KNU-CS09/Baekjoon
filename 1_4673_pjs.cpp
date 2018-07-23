#include <iostream>


int main()
{
	bool selfNum[10005] = { 0, };
	int sum;
	int n ;

	for (int i = 1; i < 10000; i++)
	{
		n = i;
		sum = i;
		while(1)
		{
			if (n == 0)break;
			sum += n % 10;
			n /=10;
		}
		if (sum <= 10000)
		{
			selfNum[sum] = true;
		}
		sum = 0;
		n = 0;
	}

	for (int i = 1; i <= 10000; i++)
	{
		if(selfNum[i] != true)
		std::cout << i << "\n";
	}
}