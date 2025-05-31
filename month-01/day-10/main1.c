#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



int main()
{
	FILE *fp;
	char input[100];
	int count = 0;

	fp = fopen("target.txt", "a");

	if (fp == NULL)
	{
		printf("Error open file!.\n");
		return 0;
	}

	printf("How many IP of Domain do you want to save?\n");
	scanf("%d", &count);
	getchar();


	for (int i = 0; i < count; i++)
	{
		printf("Enter IP or Domain: \n");
		fgets(input, sizeof(input), stdin);

		if (input[strlen(input) -1] == '\n')
			input[strlen(input) -1] == '\0';

		time_t now = time(NULL);

		char *timestamp = ctime(&now);
		timestamp[strcspn(timestamp, "\n")] = '\0';

		fprintf(fp, "[%s] %s\n", timestamp, input);
	}

	fclose(fp);
	fp = NULL;

	printf("All entries saved to targets.txt\n");
			
	return 0;
}
