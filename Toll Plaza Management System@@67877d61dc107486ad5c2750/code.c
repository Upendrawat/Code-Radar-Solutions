#include <stdio.h>
#include <string.h>

#define MAX_VEHICLES 100

struct Vehicle {
    char vehicleNumber[20];
    char vehicleType[10];
    int tollAmount;
};

int main() {
    int N;
    scanf("%d", &N);  

    struct Vehicle vehicles[MAX_VEHICLES];

    float carsToll = 0, trucksToll = 0, bikesToll = 0;

    for (int i = 0; i < N; i++) {
        scanf("%s %s %d", vehicles[i].vehicleNumber, vehicles[i].vehicleType, &vehicles[i].tollAmount);

        if (strcmp(vehicles[i].vehicleType, "Car") == 0) {
            carsToll += vehicles[i].tollAmount;
        } else if (strcmp(vehicles[i].vehicleType, "Truck") == 0) {
            trucksToll += vehicles[i].tollAmount;
        } else if (strcmp(vehicles[i].vehicleType, "Bike") == 0) {
            bikesToll += vehicles[i].tollAmount;
        }
    }

    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f\n", carsToll, trucksToll, bikesToll);

    return 0;
}
