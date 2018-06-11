#include "1.h"

using namespace std;

void div()
{
	double a, b;

	while (1)
	{
		cin >> a;

		if (a > 0)break;
	}

	while (1)
	{
		cin >> b;

		if (b < 10)break;
	}
	//cout.precision(9);
	cout.precision(33);
	cout << a / b << endl;;
}
