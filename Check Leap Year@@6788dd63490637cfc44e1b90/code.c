#include <stdio.h>

int main(){
    int Year;
    scanf("%d", &Year);
    if(Year%4==0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}