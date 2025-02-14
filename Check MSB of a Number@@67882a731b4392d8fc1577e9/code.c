#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    if(num & -num){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}