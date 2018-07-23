#include <iostream>

using namespace std;

int main()
{
	int n[8];
	int check = 1;
	int descending = 8;
	int flag = 0;


	for (int i = 0; i < 8; i++)
	{
		cin >> n[i];

	}

	for (int j = 0; j < 8; j++)
	{
		if (n[j] == check)
		{
			check++;
			if (j == 7)
			{
				cout << "ascending" << "\n";
				flag++;
			}
		}
		else
			break;
	
	}

	for (int i = 0; i < 8; i++)
	{
		if (n[i] == descending)
		{
			descending--;
			if (i == 7)
				cout << "descending" << "\n";
		}
		else
		{
			if (flag == 0)
			{
				cout << "mixed" << "\n";
			}
			break;
		}
	}


}