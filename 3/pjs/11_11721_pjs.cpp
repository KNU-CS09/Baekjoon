#include "1.h"

#include <string>

using namespace std;

void print11721()
{
	string s;

	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
	{
		cout << s.at(i);

		if ((i % 10) == 9)
			cout << "\n";
	}
}