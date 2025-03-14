#include <stdio.h>

int main(){
    int N;
    scnaf("%d", &N);
    for(int i=0; i<N; i++){
        for (int j = 0; j<i; j++){
            printf("* ");
        }
        printf("\n");
    }
}