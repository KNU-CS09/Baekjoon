#include <stdio.h>

int main()
{
	int count = 0;

	scanf("%d", &count);

	for (int i = 0; i < count; i++)
	{
		printf("%d\n", i+1);
	}

	return 0;
}
