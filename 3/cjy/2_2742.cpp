#include <stdio.h>

int main()
{
	int count = 0;

	scanf("%d", &count);

	for (int i = count; i > 0; i--)
	{
		printf("%d\n", i);
	}

	return 0;
}
