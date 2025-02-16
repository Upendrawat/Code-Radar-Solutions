#include <stdio.h>

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int y = (num1>>num2)&1;
    printf("%d", y);
}