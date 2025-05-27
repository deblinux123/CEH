#include <stdio.h>
#include <stdlib.h>



void swap(int *x, int *y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}


int main()
{
	int a = 5, b = 10;

	printf("Before swap: a = %d, b = %d\n", a, b);

	swap(&a, &b); // pass by reference

	printf("After swap: a = %d, b = %d\n", a, b);

	return 0;
}

