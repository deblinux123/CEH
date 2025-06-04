#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int n;
	float sum= 0.0, average;

	printf("Enter number of students:\n");
	scanf("%d", &n);

	float *grades = malloc(n * sizeof(float));

	if (grades == NULL)
	{
		printf("Memory allocation failed.\n");
		return 1;
	}

	for (int i = 0; i < n; i++)
	{
		printf("Enter grade for studnets: \n");
		scanf("%f", &grades[i]);
		sum += grades[i];
	}

	average = sum / n;

	printf("Average grades: %.2f\n", average);

	free(grades);
	grades = NULL;

	return 0;
}
