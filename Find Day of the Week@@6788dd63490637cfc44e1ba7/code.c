#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    switch(num){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        default:
        printf("Sunday");
    }
}