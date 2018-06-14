#include "1.h"

using namespace std;

void print2741()
{
	int a;
	while (1)
	{
		cin >> a;

		if (a <= 100000)
			break;
	}
	
	for (int i = 1; i <= a; i++)
	{
		cout << i << "\n";
	}
}