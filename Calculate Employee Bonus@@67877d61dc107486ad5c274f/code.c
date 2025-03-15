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

    struct Employee employees[MAX_EMPLOYEES];

    for (int i = 0; i < N; i++) {
        scanf("%d %s %d", &employees[i].empID, employees[i].name, &employees[i].salary);

        if (employees[i].salary < 50000) {
            employees[i].bonus = employees[i].salary * 0.10; 
        } else {
            employees[i].bonus = employees[i].salary * 0.05; 
        }
    }

    for (int i = 0; i < N; i++) {
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", 
               employees[i].empID, employees[i].name, employees[i].bonus);
    }
    return 0;
}
