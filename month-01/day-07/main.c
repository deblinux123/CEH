#include <stdio.h>


int sumTo100();

int main()
{
	printf("sum From 1 - 100 is: %d\n", sumTo100());
	return 0;
}



int sumTo100()
{
	int sum = 0;
	for(int i = 0; i <100; i++)
		sum +=i;

	return sum;
}
