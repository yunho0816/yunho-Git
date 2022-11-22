 #define CRT_SECURE_NO_WARNINGS
#include <stdio.h> #include <math.h>
int main(void)
{
	double A[5];
	int i;
	double sum;
	double m;
	double v;
	printf("Enter 5 real number: ");
	scanf("%If %If %If %lf %lf", &A[0], &A[1], &A[2], &A[3], &A[4]);
	sum = 0.;
	for (i = 0; i < 5; i++)
	{
		sum += A[i];
	}
	m = sum / 5.0;
	sum = 0.;
	for (i = 0; i < 5; i++)
	{
		sum += pow(A[i] - m, 2);
	}
	v = sum / 5.0;
	v = sqrt(v);

	printf("Standard Deviation: %lf", v);
	return 0;
}