#include <stdio.h>

int main() {
    FILE *fp;
    char userInput[100];
    int i = 3;
    char line[100];

    fp = fopen("file.txt", "a");
    if (fp == NULL) {
        printf("Something went wrong with the file.\n");
        return 1;
    }

    printf("Enter 3 lines of text:\n");
   
    while (i > 0) {
        fgets(userInput, sizeof(userInput), stdin);
        fprintf(fp, "%s", userInput);
        i--;
    }

    fclose(fp);

    printf("\nYour notes:\n");

    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}

