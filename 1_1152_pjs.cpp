#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s = {};
	int count = 0;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
	{
		if (s.at(i) == ' ')
		{
			count++;
		}
	}
	if (s.at(0) == ' ') {
		count--;
	}

	if (s.at(s.length() - 1) == ' ') {
		count--;
	}

	cout << count + 1 << "\n";

	return 0;
}