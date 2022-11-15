#include <stdio.h>

int main(void)
{
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int* fptr = &arr1[0];
	int* bptr = &arr2[5];
	int i, temp;

	printf("arr1: %d");
	printf("arr2: %d");
	printf("after swap\n");
	for (i = 0; i < 3; i++)
	{
		temp = *fptr;
		*fptr = *bptr;
		*bptr = temp;
		fptr++;
		bptr--;
	}
	for (i = 0; i < 6; i++)
		printf("arr1: %d", arr1[i]);
	for (i = 0; i < 6; i++)
		printf("arr2: %d", arr2[i]);

	return 0;
}
