#include <stdio.h>
#include <limits.h>

#define MAX 100000 

int main() {
    int n;
    scanf("%d", &n); 

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    int idx[MAX]; 
    for (int i = 0; i < MAX; i++) {
        idx[i] = -1; 
    }

    int minIndex = INT_MAX; 

    for (int i = 0; i < n; i++) {
        if (idx[arr[i]] != -1) { // If element was already seen
            if (idx[arr[i]] < minIndex) {
                minIndex = idx[arr[i]]; // Update the minimum index
            }
        } else {
            idx[arr[i]] = i; // Store first occurrence index
        }
    }

    if (minIndex == INT_MAX) {
        printf("-1\n"); 
    } else {
        printf("%d\n", arr[minIndex]); 
    }

    return 0;
}
