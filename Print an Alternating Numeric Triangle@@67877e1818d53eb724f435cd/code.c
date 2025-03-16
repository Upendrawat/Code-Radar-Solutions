#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {  
        int start = i % 2 == 0 ? 0 : 1; 
        
        for (int j = 1; j <= i; j++) {  
            printf("%d ", start);
            start = 1- start;
        }
        printf("\n");
    }
}