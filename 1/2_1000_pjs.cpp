#include "1_1000.h"
#include <iostream>

using namespace std;



void sum()
{
	int a;
	int b;

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

	cout << a+ b << endl;;
}