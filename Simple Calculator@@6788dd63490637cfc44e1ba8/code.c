#include <stdio.h>

int main(){
    int num1, num2;
    char oper;
    scanf("%d %d %c", &num1, &num2, &oper);
    int value = num1 oper num2;
    printf("%d", value);
}