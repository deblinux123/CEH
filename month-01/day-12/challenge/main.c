#include <stdio.h>
#include "student.h"

int main() {
    int count;

    printf("Enter number of students: ");
    scanf("%d", &count);

    getStudentNames(count);
    printStudentNames(count);
    freeStudentNames(count);

    return 0;
}
