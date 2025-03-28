#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to find the longest consecutive sequence
int longestConsecutive(int arr[], int n) {
    if (n == 0) return 0;

    qsort(arr, n, sizeof(int), compare); // Sort the array

    int longest = 1, current = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) continue; // Skip duplicates
        if (arr[i] == arr[i - 1] + 1) {
            current++;
        } else {
            longest = (current > longest) ? current : longest;
            current = 1;
        }
    }
    return (current > longest) ? current : longest;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", longestConsecutive(arr, n));

    return 0;
}
