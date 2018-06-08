#include "1.h"
#include <cstring>
#include <string>

using namespace std;

std::string trim(const std::string& str,
	const std::string& whitespace = " \t")
{
	const auto strBegin = str.find_first_not_of(whitespace);
	if (strBegin == std::string::npos)
		return ""; // no content

	const auto strEnd = str.find_last_not_of(whitespace);
	const auto strRange = strEnd - strBegin + 1;

	return str.substr(strBegin, strRange);
}



void print11718()
{
	string str1;
	//string str2;
	int i=1;
		//cin.getline(str, 100);
	
		
	while (i<100)
	{
		getline(cin, str1);

		//str2 = trim(str1);

		cout << trim(str1) << endl;
		i++;
	}
		
	
}