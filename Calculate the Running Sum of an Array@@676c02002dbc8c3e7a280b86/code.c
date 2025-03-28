#include <stdio.h>

void calculateRunningSum(int arr[], int n, int result[]) {
    // Initialize the first element of the result array
    result[0] = arr[0];
    
    // Calculate the running sum
    for (int i = 1; i < n; i++) {
        result[i] = result[i - 1] + arr[i];
    }
}

int main() {
    int n;

    // Input the size of the array
    scanf("%d", &n);

    // Check if size is valid
    if (n <= 0) {
        printf("Invalid size! The array size must be greater than 0.\n");
        return 1; // Exit program
    }

    int arr[n], result[n];

    printf("%d", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    calculateRunningSum(arr, n, result);

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}