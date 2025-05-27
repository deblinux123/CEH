#include <stdio.h>
#include <stdlib.h>




int main()
{
	int number = 0;
	int *pNum = &number; 
	printf("Enter a number: \n");
	scanf("%d", pNum);


	printf("You number is %d and the address is %p\n", *pNum, pNum);
	return 0;
}

