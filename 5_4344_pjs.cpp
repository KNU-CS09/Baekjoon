#include <iostream>
#include <vector>

using namespace std;

int main()
{
	float testCase;
	cin >> testCase;
	cin.clear();
	float studentNum;
	float sum = 0;
	float avg = 0;
	float overAvg = 0;
	vector<float> score;
	for (int i = 0; i < testCase; i++)
	{
		cin >> studentNum;
		score.assign(studentNum , 0);
		for (int j = 0; j < studentNum; j++)
		{
			cin >> score.at(j);

			sum +=score.at(j);

		}
		avg = sum / score.size();

		for (int x = 0; x < score.size(); x++)
		{
			if (score.at(x) > avg)
				overAvg++;
		}

		cout << fixed;;
		cout.precision(3);
		cout <<  roundf((overAvg / studentNum)*100) << "%" <<"\n";
		studentNum = 0;
		sum = 0; 
		avg = 0;
		overAvg = 0;
	}
}