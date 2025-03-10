#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[100]; 
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d:\n", i + 1);
        
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Roll No.: ");
        scanf("%d", &students[i].roll);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Information:\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:", i + 1);
        printf("Name: %s", students[i].name);
        printf("Roll No.: %d", students[i].roll);
        printf("Marks: %.2f", students[i].marks);
    }
    return 0;
}
