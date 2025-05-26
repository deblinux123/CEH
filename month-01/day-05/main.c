#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int add(int a, int b);
int multy(int a, int b);
int minus(int a, int b);
int divide(int a, int b);


int main()
{
	int x = 0;
	int y = 0;
	char operation;
	printf("Please enter a two number: \n");
	scanf("%d %d", &x, &y);

	printf("Please enter your operation:\n");
	scanf(" %c", &operation);

	if (operation == '+')
		printf("%d %c %d = %d\n", x, operation, y,  add(x, y));
	else if (operation == '-')
		printf("%d %c %d = %d\n", x, operation, y, minus(x, y));
	else if (operation == '*')
		printf("%d %c %d = %d\n",x, operation, y, multy(x, y));
	else if (operation == '/')
		if (y > 0)
			printf("%d %c %d = %d\n", x, operation, y, divide(x, y));
		else
			printf("Please enter number biger than 0\n");
	else
		printf("Invalid Option!\n");


	return 0;
}


int add(int a, int b)
{
	int result;
	result = a + b;

	return result;
}


int multy(int a, int b)
{
	int result;
	result = a * b;
	return result;
}

int minus(int a, int b)
{
	int result ;
	result = a - b;
	return result;
}

int divide(int a, int b)
{
	int result;
	result = a / b;
	return result;
}

