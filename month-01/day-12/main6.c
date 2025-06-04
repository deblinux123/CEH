#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int count = 5;
	int *arr = malloc(count * sizeof(int));

	if (arr == NULL)
	{
		printf("Failed to allocate memory\n");
		return 1;
	}

	for (int i = 0 ; i < count; i++)
	{
		arr[i] = (i + 1) * 10;
	}

	for (int i = 0; i < count; i++)
		printf("arr[%d] = %d\n", i, arr[i]);

	free(arr);
	arr = NULL;
	return 0;
}

