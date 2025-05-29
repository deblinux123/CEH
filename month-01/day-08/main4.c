#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	FILE *fp;

	char line[200];

	fp = fopen("file.txt", "r");

	if (fp == NULL)
	{
		printf("Could not open file\n");
		return 1;
	}

	printf("Lines contain 'TODOO': \n\n");

	while(fgets(line, sizeof(line), fp) != NULL)
	{
		if (strstr(line, "TODOO") != NULL)
		{
			printf("%s", line);
		}
	}

	fclose(fp);
	fp = NULL;

	return 0;
}
