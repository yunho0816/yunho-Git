#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num, i;


    printf("Please enter a number: ");
    scanf("%d", &num);


    for (i = 2; i < num; i++)
    {
        if (num%i == 0)
            break;
    }


    if (i==num)
        printf("It is a prime number");
    else
        printf("It is not a prime number");

    return 0;
}
