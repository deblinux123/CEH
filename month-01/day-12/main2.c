#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int count= 0;

	printf("Enter number of students: \n");
	scanf("%d", &count);

	char **name = (char **)malloc(count * sizeof(char *));

	if (name == NULL)
	{
		printf("Memory allocation failed.\n");
		return 1;
	}

	for (int i; i < count; i++)
	{
		name[i] = (char *)malloc(50 * sizeof(char));
		if (name[i] == NULL)
		{
			printf("Failed to allocate memory for name %d\n", i + 1);
			return 1;
		}

		printf("Enter name of student: \n");
		scanf("%s", name[i]);
	}

	printf("\nList of studnets:\n");
	for (int i =0; i < count; i++)
		printf("- %s\n", name[i]);

	for (int i = 0; i < count; i++)
		free(name[i]);

	free(name);
	name = NULL;


	return 0;
}

