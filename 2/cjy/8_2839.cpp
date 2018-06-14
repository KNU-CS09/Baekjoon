#include <stdio.h>

#define BOX_3KG 3
#define BOX_5KG 5

int main()
{
	int input = 0;
	int count = 0;

	scanf("%d", &input);

	count = input / BOX_5KG;

	if (count > 0)
	{
		input = input % BOX_5KG;

		// 3KG로 나눠지지 않는다면 5KG를 하나 뺌
		while (count > 0 && input % BOX_3KG != 0) 
		{
			count--;
			input += BOX_5KG;
		}

		if (input % BOX_3KG != 0)
			printf("%d", -1);
		else
		{
			count += input / BOX_3KG;
			printf("%d", count);
		}
	}
	else
	{
		if (input % BOX_3KG != 0)
			printf("%d", -1);
		else
		{
			printf("%d", (input / BOX_3KG));
		}
	}

	return 0;
}
