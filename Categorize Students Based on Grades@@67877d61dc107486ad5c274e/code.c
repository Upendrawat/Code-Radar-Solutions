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

    struct Student students[MAX_STUDENTS];
    for (int i = 0; i < N; i++) {
        scanf("%d %s %d", &students[i].rollNumber, students[i].name, &students[i].marks);
        students[i].grade = getGrade(students[i].marks);
    }

    for (int i = 0; i < N; i++) {
        printf("Roll Number: %d, Name: %s, Grade: %c\n", 
               students[i].rollNumber, students[i].name, students[i].grade);
    }

    return 0;
}
