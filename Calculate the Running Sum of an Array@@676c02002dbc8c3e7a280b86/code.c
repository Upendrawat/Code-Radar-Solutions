#include <stdio.h>

void calculateRunningSum(int arr[], int n, int result[]) {
    result[0] = arr[0];
    for (int i = 1; i < n; i++) {
        result[i] = result[i - 1] + arr[i];
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], result[n];
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    calculateRunningSum(arr, n, result);

    printf("The running sum array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}