#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char *name = malloc(50);

	if (name == NULL) return 1;

	strcpy(name, "Hello");

	printf("Befor: %s\n", name);

	name = realloc(name, 100);

	if (name == NULL) return 1;

	strcat(name, " faridkaki");

	printf("After reallocating the memory: \n");
	printf("%s\n", name);

	free(name);

	name = NULL;

	return 0;
}

