#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    Swtich(num>=1 && num<=7){
        case 1:
        printf("Monday");
        case 2:
        printf("Tuesday");
        case 3:
        printf("Wednesday");
        case 4:
        printf("Thursday");
        case 5:
        printf("Friday");
        case 6:
        printf("Saturday");
        default;
        printf("Sunday");
    }
}