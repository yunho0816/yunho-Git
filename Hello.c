#include <stdio.h>
int main(void)
{
	int num1 = 10, num2 = 15;
	int result1 = num1 & num2;
	int result2 = num1 | num2;
	int result3 = num1 ^ num2;
	printf("AND ������ ���: %d \n", result1);
	printf("OR ������ ���: %d \n", result2);
	printf("XOR ������ ���: %d \n", result3);
	return 0;
	}  