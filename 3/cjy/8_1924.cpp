#include <stdio.h>

int main()
{
	int result_day = 0;
	int x, y;

	char date[7][4] = { "sun", "mon", "tue", "wed", "thu", "fri", "sat" };

	scanf("%d %d", &x, &y);

	// calc days of elapsed months
	for (int i = 1; i < x; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		{
			result_day += 31;
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11)
		{
			result_day += 30;
		}
		else
		{
			result_day += 28;
		}
	}

	// calc days of this month
	result_day += y;

	printf("%s", date[result_day % 7]);

	return 0;
}