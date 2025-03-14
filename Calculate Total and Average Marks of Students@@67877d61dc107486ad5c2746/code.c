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
        count += stud[i].marks;
    }
        printf("Total Marks: %f\n", count);
        printf("Average Marks: %.2f\n", count/n);
}    