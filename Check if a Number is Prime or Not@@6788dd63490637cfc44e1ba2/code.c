#include <stdio.h>

int main(){
    int num;
    int n;
    scanf("%d", &num);
    for(n=2;n<num;n++){
        if(num%n==0){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }
}