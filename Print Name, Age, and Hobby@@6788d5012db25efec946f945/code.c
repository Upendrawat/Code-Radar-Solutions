#include <stdio.h>

int main{
    char Name[100];
    int Age[100];
    char Hobby[100];
    scanf("%s %d %s", &Name, &Age, &Hobby);
    printf("%s", Name);
    printf("%d", Age);
    printf("%s", Hobby);
    return 0;
}