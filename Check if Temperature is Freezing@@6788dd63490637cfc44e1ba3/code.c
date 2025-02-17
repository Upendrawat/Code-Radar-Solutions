#include <stdio.h>

int main(){
    int Temp;
    scanf("%d", &Temp);
    if(Temp<=0){
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }
    return 0;
}