#include <stdio.h>

int main(){
    struct student{
        int rollno;
        char name[50];
        float marks;
    };
    int n;
    float thres;
    scanf("%d", &n);
    struct student stud[n];
    for (int i=0; i<n; i++){
        scanf("%d", &stud[i].rollno);
        scanf("%s", stud[i].name);
        scanf("%f", &stud[i].marks);
    }
    scanf("%f", &thres);
    for (int i=0; i<n;i++){
        if(thres<marks){
            printf("Count of students scoring above %d: %d",thres, marks);
        }
    }
}