#include <stdio.h>
#include <stdlib.h>


int main()
{
	int *arr = malloc(3 * sizeof(int));

	if (arr == NULL) return 1;

	arr[0]=10; arr[1]=20; arr[2]=30;

	printf("Beforr reallocating memory: \n");
	for(int i = 0; i < 3; i++)
		printf("%d  ", arr[i]);

	arr = realloc(arr, 5 * sizeof(int));

	arr[3]=40; arr[4]=50;

	printf("\nAfter adding 2 more numbers into array and realocating the memory:\n");

	for (int i = 0; i < 5; i++)
		printf("%d  ",arr[i]);

	printf("\n");

	free(arr);
	arr = NULL;


	return 0;
}	

