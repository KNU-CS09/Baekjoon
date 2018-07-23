#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num[10] = { 0, };
	int a,b,c;
	int d = 0;
	string s;
	cin >> a;
	cin.clear();
	cin >> b;
	cin.clear();
	cin >> c;

	d = a*b*c;

	s = to_string(d);
	string tempNum = { 0 };
	for (int i = 0; i < s.length(); i++)
	{
		tempNum = s.at(i);
		num[atoi(tempNum.c_str())]++;
		tempNum = { 0 };
	}
	
	for (int j = 0; j < 10; j++)
	{
		cout << num[j] << "\n";
	}
}