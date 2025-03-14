#include <stdio.h>

int main(){
    struct student{
        int rollno;
        char name[50];
        float marks;
    };
    int n, roll, i;
    scanf("%d", &n);
    struct student stud[n];
    for ( i=0; i<n; i++){
        scanf("%d", &stud[i].rollno);
        scanf("%s", stud[i].name);
        scanf("%f", &stud[i].marks);
    }
    for(int i=0;i<n;i++){
        printf("Total Marks: %d", );
        printf("Average Marks: %d");
    }
}    