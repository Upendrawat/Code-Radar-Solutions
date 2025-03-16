#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (char i = 'A'; i < 'A'+N; i++) {
        for (char j = 'A'; j <= N - i; j++) {
            printf(" ");
        }
        for (char j = 'A'; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
