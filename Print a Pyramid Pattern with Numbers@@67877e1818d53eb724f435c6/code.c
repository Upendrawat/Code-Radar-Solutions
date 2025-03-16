#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (char i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        for (char j = 'A'; j <= 'A'+i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
