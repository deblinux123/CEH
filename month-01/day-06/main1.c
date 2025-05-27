#include <stdio.h>
#include <stdlib.h>



int main()
{
	int x = 0;
	int y = 0;

	printf("Enter two number: \n");
	scanf("%d %d", &x, &y);

	printf("You enter x -> %d and y-> %d\n", x, y);
	int *ptr = &x;
	int temp = *ptr;
	*ptr = y;
	ptr = &y;
	*ptr = temp;

	

	printf("\nnow x -> %d and y -> %d\n", x, y);
	printf("pointer is %d\n", *ptr);

	return 0;
}
