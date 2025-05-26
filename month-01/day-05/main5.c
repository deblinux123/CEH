#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char userInput[50];
	int countA = 0;

	printf("Enter a string: \n");
	fgets(userInput, sizeof(userInput), stdin);

	int len = strlen(userInput);

	for (int i = len - 1; i >= 0; i--)
	{
		if (userInput[i] == 'a')
			countA++;
	}

	printf("Number of 'a': %d\n", countA);
	return 0;
}
