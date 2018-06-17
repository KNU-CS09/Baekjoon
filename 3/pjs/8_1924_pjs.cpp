#include "1.h"

using namespace std;

void print1924()
{
	int day = 0;
	int month;
	int date;
	
	cin >> month;

	cin >> date;
	for (int x = 1; x < month; x++)
	{
		if (x == 1 || x == 3 || x == 5 || x == 7 || x== 8 || x== 10 || x== 12)
		{
			day += 31;
		}else if (x == 2)
		{
			day += 28;
		}else if (x == 4 || x == 6 || x== 9 ||x== 11)
		{
			day += 30;
		}	
	}
	day += date;

	switch (day % 7)
	{
	case 1:
		cout << "MON";
		break;
	case 2:
		cout << "TUE";
		break;
	case 3:
		cout << "WED";
		break;
	case 4:
		cout << "THU";
		break;
	case 5:
		cout << "FRI";
		break;
	case 6:
		cout << "SAT";
		break;
	case 0:
		cout << "SUN";
		break;
	}

}