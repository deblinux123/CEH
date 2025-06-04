#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int count = 0;
	float sum = 0.0;
	char choice;

	printf("Enter number of students: \n");
	scanf("%d", &count);

	float *grades = (float *)malloc(count * sizeof(float));

	if (grades == NULL)
	{
		printf("Memory allocation failed.\n");
		return 1;
	}

	for (int i =0; i < count;i++)
	{
		printf("Enter grade for student %d: \n", i + 1);
		scanf("%f", &grades[i]);
		sum += grades[i];
	}

	while(1)
	{
		printf("Do you want to add another grade?(y/n)\n");
		scanf(" %c", &choice);

		if (choice == 'n' || choice == 'N')
			break;

		float *temp = realloc(grades, (count + 1) * sizeof(float));

		if (temp == NULL)
		{
			printf("Failed to allocate more memory\n");
			break;
		}

		grades = temp;
		printf("Enter new grade: \n");
		scanf("%f", &grades[count]);

		sum += grades[count];
		count++;
	}
	float average = sum / count;

	printf("Total students: %d\n", count);
	printf("Average grade: %.2f\n", average);


	return 0;
}

