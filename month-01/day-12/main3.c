#include <stdio.h>
#include <stdlib.h>


int main()
{
	int *p = malloc(sizeof(int));

	if (p == NULL)
	{
		printf("Failed to allocate memory\n");
		return 1;
	}

	*p = 34;
	printf("Value is : %d in the %p address \n", *p, p);

	free(p);
	p = NULL;

	return 0;
}
