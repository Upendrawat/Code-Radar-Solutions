#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {  
        int start = i % 2 == 0 ? 0 : 1; // Even row starts with 0, odd row starts with 1
        
        for (int j = 1; j <= i; j++) {  
            printf("%d ", start); // Print t
        }
    }
}