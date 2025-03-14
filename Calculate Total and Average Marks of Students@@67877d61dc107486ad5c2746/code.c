#include <stdio.h>

int main(){
    struct student{
        int rollno;
        char name[50];
        float marks;
    };
    int n, roll, i;
    scanf("%d", &n);
    float count = 0;
    struct student stud[n];
    for ( i=0; i<n; i++){
        scanf("%d", &stud[i].rollno);
        scanf("%s", stud[i].name);
        scanf("%f", &stud[i].marks);
        count += &stud[i].marks;
    }
    for(int i=0;i<n;i++){
        printf("Total Marks: %d\n", count);
        printf("Average Marks: %f", count/n);
    }
}    