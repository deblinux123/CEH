#include <stdio.h>
#include <stdlib.h>


int main()
{
	FILE *fp;

	fp = fopen("file.txt", "w"); // this is creating the new file
	
	if (fp == NULL)
	{
		printf("Error opening file for writing\n");
		return 1;
	}

	fprintf(fp, "First note!\nSecond note\n");

	fclose(fp);

	fp = NULL;

	return 0;
}

