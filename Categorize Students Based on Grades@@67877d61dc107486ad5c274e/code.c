#include <stdio.h>

#define MAX_STUDENTS 100

struct Student {
    int rollNumber;
    char name[50];
    int marks;
    char grade;
};

char getGrade(int marks) {
    if (marks >= 85){
        return 'A';
    }
    else if (marks >= 70 && marks<85){
        return 'B';
    }
    else{
        return 'C';
    }
}

int main() {
    int N;
    scanf("%d", &N);

    struct Student student[MAX_STUDENTS];
    for (int i = 0; i <= N-1; i++) {
        scanf("%d %s %d", &student[i].rollNumber, student[i].name, &student[i].marks);
        student[i].grade = getGrade(student[i].marks);
    }

    for (int i = 0; i <= N-1; i++) {
        printf("Roll Number: %d, Name: %s, Grade: %c\n", 
               student[i].rollNumber, student[i].name, student[i].grade);
    }

    return 0;
}
