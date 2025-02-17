#include <stdio.h>

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if(num2-num1>0){
        printf("Profit");
    }
    else if(num2-num1==0){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }
    return 0;
}