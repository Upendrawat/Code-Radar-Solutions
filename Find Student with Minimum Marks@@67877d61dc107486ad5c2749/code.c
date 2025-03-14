#include <stdio.h>

struct student{
    int rollNumber;
    char name[50];
    float marks;
};

int main(){
    int n;
    scanf("%d", &n);
    struct student students[n];
    for (int i =0; i<n;i++){
        scanf("%d %s %f", &students[i].rollNumber, &students[i].name, &students[i].marks);
    }
    float min = students[0].marks;
    int a = 0;
    for(int i =1; i<n; i++){
        if(min>students[i].marks){
            min=students[i].marks;
            a = i;
        }
    }
    printf("Student with Minimun Marks: Roll Number: %d, Name: %s, Marks: %.2f \n",students[a].rollNumber, students[a].name, students[a].marks);
}