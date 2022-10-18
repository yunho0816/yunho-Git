#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Binary(int n)
{
	if (n > 0)
	{
		Binary(n / 2);
		printf("%d", n % 2);
	}
}

void main()
{
	int n;
	printf("Please enter a number: ");
	scanf("%d", &n);
	printf("");
	Binary(n);
	
}