#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num[10], i;

	printf("Please input five integers : ");
	scanf("%d %d %d %d %d", &num);
	

	printf("Odd numbers: \n");
	for (i = 0; i < 10; i++)
	{
		if (num[i] % 2 == 1)
			printf("%d\n", num[i]);

	printf("Even numbers: \n");
		for (i = 0; i < 10; i++)
		{
			if (num[i] % 2 == 0)
				printf("%d\n", num[i]);
		}
	}
	return 0;
}