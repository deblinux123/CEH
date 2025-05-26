#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char str1[50];
	char str2[50];

	printf("Enter first string:\n");
	scanf("%s", str1);

	printf("Enter second string:\n");
	scanf("%s", str2);

	strcat(str1, str2);

	printf("Result : %s\n", str1);


	return 0;
}


