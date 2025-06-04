#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int count = 3;
	char **name = malloc(count * sizeof(char *));

	if (name == NULL) return 1;

	for (int i = 0; i < count; i++)
	{
		name[i] = malloc(50 );
		sprintf(name[i], "studnet %d", i + 1);
	}

	name= realloc(name, 4 * sizeof(char *));
	name[3] = malloc(50);

	sprintf(name[3], "student 4");

	for (int i = 0; i < 4; i++)
	{
		printf("- %s\n", name[i]);
		free(name[i]);
	}

	free(name);

	name = NULL;

	return 0;
}

