#include <stdio.h>
#include <stdlib.h>


int main()
{
	FILE *fp;

	fp = fopen("file.txt", "r");

	if (fp == NULL)
	{
		printf("Failed to open the file\n");
		return 1;
	}

	char line[100];

	while(fgets(line, sizeof(line), fp))
		printf("%s", line);

	fclose(fp);
	fp = NULL;

	return 0;
}
