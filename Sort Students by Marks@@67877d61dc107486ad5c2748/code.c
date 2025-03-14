#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

void sortStudents(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &students[i].rollNumber);
        scanf(" %s", students[i].name); 
        scanf("%f", &students[i].marks);
    }

    sortStudents(students, n);

    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }

    return 0;
}
