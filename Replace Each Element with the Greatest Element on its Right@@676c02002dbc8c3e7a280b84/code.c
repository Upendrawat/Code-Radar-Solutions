#include <stdio.h>

void replaceWithGreatestRight(int arr[], int n) {
    int maxRight = -1;  

    for (int i = n - 1; i >= 0; i--) {
        int temp = arr[i];  
        arr[i] = maxRight;   
        if (temp > maxRight) {
            maxRight = temp; 
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);  // Read the size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read array elements
    }

    replaceWithGreatestRight(arr, n);  // Process the array

    // Print the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
