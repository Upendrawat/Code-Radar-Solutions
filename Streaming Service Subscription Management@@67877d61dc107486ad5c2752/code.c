#include <stdio.h>
#include <string.h>

#define MAX_USERS 100

struct Subscription {
    char userName[50];
    char subType[10];
    float cost;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Subscription users[MAX_USERS];

    int Count1 = 0, Count2 = 0, Count3 = 0;
    float Revenue1 = 0, Revenue2 = 0, Revenue3 = 0;

    for (int i = 0; i < N; i++) {
        scanf("%s %s %f", users[i].userName, users[i].subType, &users[i].cost);

        if (strcmp(users[i].subType, "Basic") == 0) {
            Count1++;
            Revenue1 += users[i].cost;
        } else if (strcmp(users[i].subType, "Standard") == 0) {
            Count2++;
            Revenue2 += users[i].cost;
        } else if (strcmp(users[i].subType, "Premium") == 0) {
            Count3++;
            Revenue3 += users[i].cost;
        }
    }

    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f\n",
           Count1, Revenue1, Count2, Revenue2, Count3, Revenue3);

    return 0;
}
