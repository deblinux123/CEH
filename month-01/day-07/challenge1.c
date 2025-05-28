#include <stdio.h>

int sumOfNumbers(int *x, int *y, int *z, int *result);

int main()
{
	int a = 0, b = 0, c = 0, result = 0;

	printf("Please enter 3 numbers: \n");
	scanf("%d %d %d", &a, &b, &c);

	sumOfNumbers(&a, &b, &c, &result);

	printf("The Sumf of the %d, %d and %d is %d \n", a, b, c, result);

	return 0;

}



int sumOfNumbers(int *x, int *y, int *z, int *result)
{

	*result = *x + *y +*z;

	return *result;
}

