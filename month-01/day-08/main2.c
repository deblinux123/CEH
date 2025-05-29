#include <stdio.h>


int main()
{
	FILE *fp;

	fp = fopen("file.txt", "a");

	if (fp == NULL)
	{
		printf("Failed\n");
		return 1;
	}

	char userInput[100];
	printf("Enter some text:\n");
	scanf("%[^\n]", userInput);

	fprintf(fp, "%s\n", userInput);
	fclose(fp);

	fp = NULL;

	char line[200];

	fp = fopen("file.txt", "r");
	
	if (fp == NULL)
	{
		printf("Failed to open the file\n");
		return 1;

	}

	while (fgets(line, sizeof(line), fp) != NULL)
		printf("%s", line);

	fclose(fp);
	fp = NULL;


	return 0;
}
