#include<stdio.h>
int main()
{
    struct student{
    int rollno;
    char name[50];
    float marks;
};
struct student stud[1000];
int n;
float count=0;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&stud[i].rollno);
    scanf("%s",&stud[i].name);
    scanf("%f",&stud[i].marks);
    printf("%d", (count+marks)/n);
}
return 0;
}