#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int i = 1;i<11; i++){
        printf("%d X %d = %d", N, i, N*i);
    }
}