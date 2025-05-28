#include <stdio.h>

void checkPrime(int number, int *result);


int main()
{
	int number;
	int isPrime = 0;

	printf("Enter a number:\n");
	scanf("%d", &number);

	checkPrime(number, &isPrime);

	if (isPrime == 1)
		printf("%d is a prime number.\n", number);
	else
		printf("%d is not a prime number.\n", number);

	return 0;
}


void checkPrime(int number, int *result)
{
	*result = 1;

	if (number <= 1)
	{
		*result = 0;
		return ;
	}

	for (int i =2; i <= number /2; i++)
	{
		if (number % i == 0)
		{
			*result = 0;
			break;
		}
	}
}	
