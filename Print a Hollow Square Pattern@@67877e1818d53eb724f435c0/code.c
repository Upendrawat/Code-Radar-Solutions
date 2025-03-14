#include <stdio.h>

int main(){
    int N;
    scnaf("%d", &N);
    for(int i=0; i<N; i++){
        for (int j = 0; j<N; j++){
           if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("* ");
            } 
            else {
                printf("  "); 
            }
        }
        printf("\n");
    }
}