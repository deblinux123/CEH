#include <stdio.h>
#include <stdlib.h>
#include "student.h"

#define MAX_NAME_LENGTH 50

char **names = NULL;  // متغیر global برای نگهداری اسامی

void getStudentNames(int count) {
    names = (char **)malloc(count * sizeof(char *));
    if (names == NULL) {
        printf("❌ Memory allocation failed!\n");
        exit(1);
    }

    for (int i = 0; i < count; i++) {
        names[i] = (char *)malloc(MAX_NAME_LENGTH * sizeof(char));
        if (names[i] == NULL) {
            printf("❌ Memory allocation failed for student %d\n", i + 1);
            exit(1);
        }

        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);
    }
}

void printStudentNames(int count) {
    printf("\n📋 List of Students:\n");
    for (int i = 0; i < count; i++) {
        printf("- %s\n", names[i]);
    }
}

void freeStudentNames(int count) {
    for (int i = 0; i < count; i++) {
        free(names[i]);
    }
    free(names);
    names = NULL;
}
