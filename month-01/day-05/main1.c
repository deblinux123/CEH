#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char name[50];

	printf("Please enter your name: \n");
	scanf("%s", name);

	int len = strlen(name);

	printf("Length: %d\n", len);

	for (int i = len - 1; i >= 0; i--)
		printf("%c", name[i]);
	printf("\n");


	return 0;
}

