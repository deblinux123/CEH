#include <stdio.h>

void changeValue(int x);


int main()
{
	int a = 5;
	changeValue(a);
	printf("a = %d\n", a);

	return 0;

}


void changeValue(int x)
{
	x = 10;
}


