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
    int size;
    scanf("%d", &size);

    if (size % 2 == 0) {
        printf("Please enter an odd number.\n");
    } 
    else {
        Diamond(size);
    }

    return 0;
}
