#include <stdio.h>

int main(){
    int s1, s2, s3;
    scanf("%d %d %d", &s1, &s2, &s3);
    if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1){
        if(s1==s2 && s2==s3){
            printf("Equilateral");
        }
        else if((s1==s2) || (s2==s3) || (s1==s3)){
            printf("Isoceles");
        }
        else{
            printf("Scalene");
        }
    }
    else{
        printf("Not a valid Triangle");
    }
    return 0;
}