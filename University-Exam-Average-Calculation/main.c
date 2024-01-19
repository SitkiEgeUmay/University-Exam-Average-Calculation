#include <stdio.h>

int main() {
    int midterm[5], final[5], average[5], project[5], i, j, studentCount = 10;

    for (j = 0; j < studentCount; j++) {
        for (i = 0; i < 5; i++) {
            printf("Enter midterm, final, and project grades for student %d, course %d: ", j + 1, i + 1);
            scanf("%d%d%d", &midterm[i], &final[i], &project[i]);
            average[i] = (project[i] * 0.2) + (midterm[i] * 0.3) + (final[i] * 0.5);
        }
    }

    for (j = 0; j < studentCount; j++) {
        for (i = 0; i < 5; i++) {
            printf("Average grade for Student %d in Course %d: %d\n", j + 1, i + 1, average[i]);
        }
    }

    return 0;
}
