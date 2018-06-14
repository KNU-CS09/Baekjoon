#include "1.h"

using namespace std;

void print2742()
{
	int a;
	while (1)
	{
		cin >> a;

		if (a <= 100000)
			break;
	}

	for (int i = a; i > 0; i--)
	{
		cout << i << "\n";
	}
}