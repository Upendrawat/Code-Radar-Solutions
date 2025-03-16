#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Book books[N];

    for (int i = 0; i < N; i++) {
        scanf(" %s %s %f", books[i].title, books[i].author, &books[i].price);
    }

    float threshold;
    scanf("%f", &threshold);

    for (int i = 0; i < N; i++) {
        if (books[i].price > threshold) {
            printf("Book aboce price %.2f\n", threshold);
            printf("Title: %s, Author: %s, Price: %.2f\n", books[i].title, books[i].author, books[i].price);
        }
    }

    return 0;
}
