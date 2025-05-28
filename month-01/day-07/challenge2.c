#include <stdio.h>

void checkNumber(int *x);



int main()
{
	int number = 0;
	printf("Enter a number : \n");
	scanf("%d", &number);

	checkNumber(&number);
	return 0;
}


void checkNumber(int *x)
{
	if (*x % 2 == 0)
		printf("%d is Even\n", *x);
	else
		printf("%d is Odd\n", *x);
}

