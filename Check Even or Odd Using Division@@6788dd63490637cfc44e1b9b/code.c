#include <stdio.h>

int  main(){
    int num;
    scanf("%d", &num);
    // if(num%2==0){
    //     printf("Even");
    // }
    // else{
    //     printf("Odd");
    // }

    if ((num / 2) * 2 == num) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }
    return 0;
}