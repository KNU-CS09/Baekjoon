#include "1.h"

using namespace std;

void four()
{
	int a, b;

	while (1)
	{
		cin >> a;

		if (1 <= a)break;
	}

	while (1)
	{
		cin >> b;

		if (b <= 10000)break;
	}

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;
}