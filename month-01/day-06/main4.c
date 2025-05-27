#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numbers[5];

	printf("Please enter 5 numbers: \n");
	scanf("%d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);

	int *ptr = numbers;
	int a = 0;

	for(int i = 0; i < 5; i++)
	{
		a = *(ptr + i);
		a = a * a;
		printf("%d ", a);
	}
	printf("\n");

	return 0;
}
