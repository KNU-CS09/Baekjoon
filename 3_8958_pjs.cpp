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
	//cin.clear()�� cin ��ä�� ���� ���� �÷��� �ʱ�ȭ 
	//cin.ignore(���� ���� �ִ����, ���� ����)  -> ���� ���۾ȿ� �ִ� ���� ����

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