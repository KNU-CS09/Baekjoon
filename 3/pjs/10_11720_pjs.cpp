#include "1.h"

using namespace std;

void print11720()
{
	int a;
	char b;
	int sum = 0;
	while (1)
	{
		cin >> a;
	
		if (1 <= a <= 100)
			break;
	}
	for (int i = 0; i < a; i++) 
	{
		cin >> b;
		sum += (b - '0');
	}

	cout << sum;
}