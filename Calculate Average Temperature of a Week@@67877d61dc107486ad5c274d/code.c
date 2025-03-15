#include <stdio.h>

#define DAYS_IN_WEEK 7

struct Day {
    char name[20];
    float temp;
};

int main() {
    struct Day week[DAYS_IN_WEEK];
    float totalTemp = 0.0;

    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        scanf("%s %f", week[i].name, &week[i].temp);
        totalTemp += week[i].temp;
    }

    float averageTemp = totalTemp / DAYS_IN_WEEK;

    printf("Average Temperature: %.2f\n", averageTemp);

    return 0;
}
