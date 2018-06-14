#include "1.h"

using namespace std;

void print2739()
{
	int a;
	while (1)
	{
		cin >> a;

		if (1<= a <= 9)
			break;
	}

	for (int i = 1; i < 10; i++)
	{
		cout << a << " * " << i << " = " <<  a * i   << "\n";
	}
}