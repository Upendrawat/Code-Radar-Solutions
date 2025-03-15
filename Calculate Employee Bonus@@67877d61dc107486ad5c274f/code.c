#include <stdio.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int empID;
    char name[50];
    int salary;
    float bonus;
};

int main() {
    int N;
    scanf("%d", &N); 

    struct Employee employes[MAX_EMPLOYEES];

    for (int i = 0; i < N; i++) {
        scanf("%d %s %d", &employes[i].empID, employes[i].name, &employes[i].salary);

        if (employes[i].salary < 50000) {
            employes[i].bonus = employes[i].salary * 0.10; 
        } else {
            employes[i].bonus = employes[i].salary * 0.05; 
        }
    }

    for (int i = 0; i < N; i++) {
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", 
               employes[i].empID, employes[i].name, employes[i].bonus);
    }
    return 0;
}
