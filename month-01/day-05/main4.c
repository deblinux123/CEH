#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()

{
	char source[50];
	char dest[50];

	printf("Please enter a string: \n");
	scanf("%s", source);

	strncpy(dest, source, sizeof(dest) - 1);
	dest[sizeof(dest) -1] = '\0';

	printf("Copied string: %s\n", dest);
	return 0;
}
