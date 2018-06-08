#include "1.h"

using namespace std;

void print10430()
{
	int a, b, c;

	while (1)
	{
		cin >> a;

		if (a >= 2)break;
	}

	while (1)
	{
		cin >> b;

		if (b >= 0)break;
	}

	while (1)
	{
		cin >> c;

		if (c <= 10000)break;
	}
	cout << (a + b) % c << endl;
	cout <<  (a%c + b%c) % c << endl;
	cout << (a * b) % c << endl;
	cout << (a%c * b%c) % c << endl;
}