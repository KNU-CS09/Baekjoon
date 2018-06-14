#include "1.h"

using namespace std;

void print2439()
{
	int a;
	while (1)
	{
		cin >> a;

		if (1 <= a <= 100)
			break;
	}

	for (int i = 1; i <= a; i++)
	{
		for (int x = 0; x < a - i; x++)
		{
			cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
		
			cout << "*";
		}
		cout << "\n";
	}
}