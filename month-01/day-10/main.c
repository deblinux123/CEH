#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	FILE *fp;
	char input[100];
	int count = 0;

	fp = fopen("targets.txt", "a");

	if (fp == NULL)
	{
		printf("Error opening file!\n");
		return 1;
	}

	printf("How many IPs or domain do you want ro save?\n");
	scanf("%d", &count);
	getchar();

	for (int i = 0; i < count; i++)
	{
		printf("Enter IP or Domain: \n");
		fgets(input, sizeof(input), stdin);

		if (input[strlen(input) -1] == '\n')
			input[strlen(input) - 1] == '\0';

		fprintf(fp, "%s\n", input);
	}
	fclose(fp);
	fp = NULL;

	printf("Saved syccessfully to target.txt \n");

	return 0;
}

