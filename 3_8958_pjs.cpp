#include <iostream>
#include <string>
using namespace std;

int main()
{
	int test_case;
	string s;
	int i=0;
	int o_count = 0;
	int flag = 0;
	cin >> test_case;
	//cin.clear()는 cin 객채의 내부 상태 플래그 초기화 
	//cin.ignore(무시 문자 최대길이, 종료 문자)  -> 현재 버퍼안에 있는 내용 무시

	cin.ignore();

	for (int i = 0; i < test_case; i++)
	{
		getline(cin, s);


		for (int j = 0; j < s.length(); j++)
		{
			if (s.at(j) == 'O')
			{
				flag++;
				o_count += flag;
			}
			else
				flag = 0;
		}
		cout << o_count << "\n";
		flag = 0;
		o_count = 0;
		s.clear();
	}
}