#include <stdio.h>

#define DAYS_IN_WEEK 7

struct Day {
    char name[20];
    float temperature;
};

int main() {
    struct Day week[DAYS_IN_WEEK];
    float totalTemperature = 0.0;

    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        scanf("%s %f", week[i].name, &week[i].temperature);
        totalTemperature += week[i].temperature;
    }

    float averageTemperature = totalTemperature / DAYS_IN_WEEK;

    printf("Average Temperature: %.2f\n", averageTemperature);

    return 0;
}
