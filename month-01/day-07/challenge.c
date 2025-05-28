#include <stdio.h>


int doubleValue(int *x);



int main()
{
	int userInput;

	printf("Enter a number: \n");
	scanf("%d", &userInput);
	
	doubleValue(&userInput);

	printf("This is your result: %d\n", userInput);

	return 0;
}



int doubleValue(int *x)
{
	*x = *x * 2;

	return *x;
}
