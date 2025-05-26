#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	char str1[50];
	char str2[50];

	int result;

	printf("Enter first string: \n");
	scanf("%s", str1);

	printf("Enter second string: \n");
	scanf("%s", str2);

	result = strcmp(str1, str2);


	if (result == 0)
		printf("Strings are equal\n");
	else if (result > 0)
		printf("%s is greater than %s\n", str1, str2);
	else if (result < 0)
		printf("%s is greater than %s\n", str2, str1);
	else
		printf("Invalid input\n");

	return 0;
}

