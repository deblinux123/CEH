
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	FILE *fp = NULL;

	int len;

	fp = fopen("file.txt", "r");

	if (fp == NULL)
		return -1;

	fseek(fp, 0, SEEK_END);

	len = ftell(fp);

	fclose(fp);

	printf("Total size of the file is : %dbytes\n", len);

	return 0;
}

