#include <stdio.h>
#include <string.h>

int main()
{
	int length = 0;
	char arr[101] = { 0 };

	scanf("%s", arr);
	length = strlen(arr);

	for (int i = 0; i < length; i++)
	{
		if (i != 0 && i % 10 == 0)
			printf("\n");

		printf("%c", arr[i]);
	}

	return 0;
}