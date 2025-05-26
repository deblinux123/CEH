#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char userInput[100];
	char dest[100];
	char star = '*';

	printf("Enter some text: \n");
	fgets(userInput, sizeof(userInput), stdin);

	for (int i = 0; userInput[i] != '\0'; i++)
	{
		if (userInput[i] == 'a')
			dest[i] = star;
		else
			dest[i] = userInput[i];
	
	
		if (userInput[i] == '\n')
		{
			dest[i+1] = '\0';
			break;
		}
	}
	printf("%s\n", dest);

	return 0;
}

