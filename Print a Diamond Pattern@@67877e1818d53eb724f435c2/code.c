#include <stdio.h>

void Diamond(int N) {
    for (int i = 1; i <= N; i += 2) {
        for (int j = 0; j < (N - i) / 2; j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    
    for (int i = N - 2; i >= 1; i -= 2) {
        for (int j = 0; j < (N - i) / 2; j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
}

    int main() {
    int N;
    scanf("%d", &N);

    Diamond(N);

    return 0;
    }
