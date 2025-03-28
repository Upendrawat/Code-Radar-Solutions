#include <stdio.h>
#include <stdlib.h>  // For abs()

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    num = abs(num);  // Convert negative numbers to positive
    int sum = 0;
    while (num != 0) {
        sum += num % 10;  // Extract the last digit and add to sum
        num /= 10;        // Remove the last digit
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n); // Read the size of the array

    int arr[n], result[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
        result[i] = sumOfDigits(arr[i]); // Compute sum of digits
    }

    // Print the new array
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
