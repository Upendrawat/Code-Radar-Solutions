#include <stdio.h>

int main(){
    struct student{
        int rollno;
        char name[50];
        float marks;
    };
    struct student stud[1000];
    int n, roll;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &stud[i].rollno);
        scanf("%s", stud[i].name);
        scanf("%f", &stud[i].marks);
    }
    scanf("%d", &roll);
    if(roll== &stud[i].rollno){
        printf("%d %d %d", &stud[i].rollno, stud[i].name, &stud[i].marks);
    }
    else{
        printf("Student not found");
    }
}