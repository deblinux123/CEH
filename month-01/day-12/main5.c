#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char *name = (char *)malloc(50 * sizeof(char));

	if (name == NULL)
	{
		printf("Failed to allocate memory\n");
		return 1;
	}

	printf("Enter your name: \n");
	scanf("%s", name);

	printf("Hello, %s\n", name);

	free(name);
	name = NULL;

	return 0;
}

