#include <stdio.h>

void Diamond(int n) {
    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < (n - i) / 2; j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    
    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = 0; j < (n - i) / 2; j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
}

    int main() {
    int N;
    printf("Enter the number of rows for the top half: ");
    scanf("%d", &N);

    printDiamond(N);

    return 0;
    }
