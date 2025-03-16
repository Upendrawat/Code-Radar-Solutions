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

    float rate;
    scanf("%f", &rate);

    for (int i = 0; i < N; i++) {
        if (books[i].price > rate) {
            printf("Books above price %.2f:\n", rate);
            printf("Title: %s, Author: %s, Price: %.2f\n", books[i].title, books[i].author, books[i].price);
        }
    }

    return 0;
}
