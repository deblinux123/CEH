#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int *p = malloc(sizeof(int));

	if (p == NULL) return 1;

	*p = 34;

	printf("Before realloc: %d\n", *p);

	p = realloc(p, 2 * sizeof(int));

	if (p == NULL) return 1;

	p[1] = 20;

	printf("After realocating the memory: %d, %d\n", p[0], p[1]);

	free(p);

	p = NULL;

	return 0;
}
