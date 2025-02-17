#include <stdio.h>

int main(){
    int age;
    int cit;
    scanf("%d %d", &age, &cit);
    if(age>=18 && cit==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
}