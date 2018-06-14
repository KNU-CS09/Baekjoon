#include "1.h"

using namespace std;

void print2440()
{
	
	int a;
	while (1)
	{
		cin >> a;

		if (1 <= a <= 100)
			break;
	}
	int flag = a;
	for (int i = 1; i <= a; i++)
	{
		
		for (int j = flag; j > 0; j--)
		{
			cout << "*";
		}
		cout << "\n";
		flag--;
	}
}