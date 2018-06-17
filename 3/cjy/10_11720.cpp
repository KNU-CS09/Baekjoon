#include <stdio.h>

int main()
{
	int count = 0;
	int sum = 0;
	char arr[101] = { 0 };

	scanf("%d", &count);

	scanf("%s", arr);

	for (int i = 0; i < count; i++)
	{
		sum += (arr[i] - 48);
	}

	printf("%d", sum);
	return 0;
}