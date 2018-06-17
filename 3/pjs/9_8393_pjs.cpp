#include "1.h"

using namespace std;

void print8393()
{
	int a;
	int sum=0;
	while (1)
	{
		cin >> a;

		if (1 <= a <= 10000)
			break;
	}

	for (int x = 1; x <= a; x++)
	{
		sum += x;
	}
	cout << sum;
}