#include <stdio.h>
#include <stdlib.h>



int main()
{
	int numbers[] = {1, 2, 3, 4, 5};
	int *ptr = numbers;


	printf("Using pointer arithmetic\n");

	for (int i = 0; i < 5; i++)
		printf("numbers[%d] = %d\n", i, *(ptr + i));

	return 0;
}

