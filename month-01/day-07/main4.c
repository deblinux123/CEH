#include <stdio.h>


void sumArray(int *arr, int size, int *sum);


int main()
{
	int number[5];
	int total = 0;

	printf("Please enter a 5 number : \n");
	for (int i = 0; i < 5; i++)
		scanf("%d", &number[i]);

	sumArray(number, 5, &total);

	printf("The sum of the array is %d\n", total);

	return 0;
}


void sumArray(int *arr, int size, int *sum)
{
	*sum = 0;
	for (int i = 0; i < size; i++)
		*sum += arr[i];
}
