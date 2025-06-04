#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	float *num = malloc(sizeof(float));

	if (num == NULL)
	{
		printf("Failed to allocate memory\n");
		return 1;
	}

	*num = 98.4;
	printf("Value is : %.2f\n", *num);

	free(num);
	num = NULL;
	return 0;
}

