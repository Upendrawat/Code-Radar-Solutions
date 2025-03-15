#include <stdio.h>
#include <string.h>

#define MAX_TICKETS 100

struct MovieTicket {
    char movieName[50];
    char ticketType[10];
    int price;
};

int main() {
    int N;
    scanf("%d", &N);
    struct MovieTicket tickets[MAX_TICKETS];

    int standardRevenue = 0, premiumRevenue = 0, vipRevenue = 0;

    for (int i = 0; i < N; i++) {
        scanf("%s %s %d", tickets[i].movieName, tickets[i].ticketType, &tickets[i].price);

        if (strcmp(tickets[i].ticketType, "Standard") == 0) {
            standardRevenue += tickets[i].price;
        } else if (strcmp(tickets[i].ticketType, "Premium") == 0) {
            premiumRevenue += tickets[i].price;
        } else if (strcmp(tickets[i].ticketType, "VIP") == 0) {
            vipRevenue += tickets[i].price;
        }
    }

    printf("Standard: %d, Premium: %d, VIP: %d\n", standardRevenue, premiumRevenue, vipRevenue);

    return 0;
}
