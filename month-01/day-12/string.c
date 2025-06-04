#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int count = 5;
	char **name = malloc(count * sizeof(char *));

	if (name == NULL) return 1;

	for (int i = 0; i < count; i++)
	{
		name[i] = malloc(50 * sizeof(char));
		printf("Enter name %d:\n", i + 1);
		scanf("%s", name[i]);
	}

	printf("\nNames: \n");
	for (int i = 0; i < count; i++)
	{
		printf("- %s\n", name[i]);
		free(name[i]);
	}

	free(name);
	name = NULL;

	return 0;
}	
