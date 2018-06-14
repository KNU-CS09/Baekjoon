#include <stdio.h>

int main()
{
	int count = 0;

	scanf("%d", &count);

	for (int i = count; i > 0; i--)
	{
		for (int j = count; j > i; j--)
		{
			printf(" ");
		}

		for (int j = 0; j < i; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}