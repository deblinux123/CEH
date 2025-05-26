#include <stdio.h>
#include <string.h>

int main()
{
    char source[100];
    char dest[100];
    int j = 0;

    printf("Enter some string: \n");
    fgets(source, sizeof(source), stdin);

    for(int i = 0; source[i] != '\0'; i++)
    {
        if (source[i] != 'i' && source[i] != 'e' && source[i] != 'o')
        {
            dest[j] = source[i];
            j++;
        }
    }

    dest[j] = '\0'; // پایان‌دهنده رشته

    printf("Result with removing 'i, e, o':\n");
    printf("%s\n", dest);

    return 0;
}

