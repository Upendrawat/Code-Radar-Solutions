#include <stdio.h>

int main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Average: %.2f", (float)(num1+num2+num3)/3);
    return 0;
}