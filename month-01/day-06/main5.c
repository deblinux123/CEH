#include <stdio.h>
#include <stdlib.h>


int main()
{
	int numbers[5];
	printf("Please enter 5 numbers: \n");
        scanf("%d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);

	int *ptr = numbers;


	for (int i = 0; i < 5; i++)
	{
		*(ptr + i) = *(ptr + i) * 2;
	}

	printf("Doubled Values:\n");

	for (int i =0; i < 5; i++)
	{
		printf("%d ", *(ptr + i));
	}

	printf("\n");
	
	return 0;
}

