#include <iostream>
#include <vector>

int main()
{
	int a;
	float max = 0;
	float sum = 0;
	std::cin >> a;

	std::cin.clear();

	//std::vector<int> *score = new std::vector<int>(a);

	std::vector<float> score(a);

	for (int i = 0; i < a; i++)
	{
		std::cin >> score.at(i);
		if (score.at(i) > max)
			max = score.at(i);

	}

	for (int j = 0; j < a; j++)
	{
		sum += score.at(j) / max * 100;
	}
	std::cout << std::fixed;
	std::cout.precision(2);
	std::cout << sum/a << "\n";
}