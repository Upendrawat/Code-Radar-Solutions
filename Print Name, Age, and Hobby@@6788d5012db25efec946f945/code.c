#include <stdio.h>

int main{
    char Name[100];
    int Age[100];
    char Hobby[100];
    scanf("%c %d %c", &Name, &Age, &Hobby);
    printf("Name: %c", Name);
    printf("Age: %d", Age);
    printf("Hobby: %c", Hobby);
    return 0;
}