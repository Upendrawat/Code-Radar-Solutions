#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[100]; 
    int n, i;

    printf("Enter the number of students in the class: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter information for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Roll No.: ");
        scanf("%d", &students[i].roll);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Information:\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll No.: %d\n", students[i].roll);
        printf("Marks: %.2f\n", students[i].marks);
    }
    return 0;
}
