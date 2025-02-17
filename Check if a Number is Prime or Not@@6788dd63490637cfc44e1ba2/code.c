#include <stdio.h>

int main(){
    int num;
    int n;
    int a=0;
    scanf("%d", &num);
    for(n=2;n<num;n++){
        if(num%n==0){
            a=1;
            break;
        }
        else{
            printf("false")
        }
    }
    if(a==1){
        printf("Prime");
    }
    else{
        printf("notprime");
    }
}