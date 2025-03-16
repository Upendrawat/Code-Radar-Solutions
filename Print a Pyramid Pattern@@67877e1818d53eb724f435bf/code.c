#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int space = 1; space <= N - i; space++) {
            printf(" ");
        }

        for (int star = 1; star <= (2 * i - 1); star++) {
            printf("*");
        }

        printf("\n");  
    }

    return 0;
}
