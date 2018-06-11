#include "1.h"

using namespace std;

void print2839()
{
	int a;

	while (1)
	{
		cin >> a;

		if (3 <= a <= 5000)break;
	}

	int i = a / 5; 
	

	while (i >=0 )
	{
		if (a % 5 == 0)
		{
			cout << i << endl; 
			break;
		}
		else if ((a - (i * 5)) % 3 == 0)
		{
			cout << i + (a - (i * 5)) / 3 << endl;
			break;
		}
		else
		{
			if (i == 0)
			{
				cout << -1 << endl;
			}
		}
		i--;
		
	}
}