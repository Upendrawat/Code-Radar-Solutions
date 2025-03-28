#include <stdio.h>

// Function to place elements at correct indices
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to find the smallest missing positive integer
int findSmallestMissing(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
            swap(&arr[i], &arr[arr[i] - 1]);
        }
    }

    // Find the first missing positive number
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }
    
    return n + 1; // If all numbers are present, return next number
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSmallestMissing(arr, n));

    return 0;
}
