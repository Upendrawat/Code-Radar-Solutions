#include <stdio.h>

// Function to check if an array is a palindrome
int isPalindrome(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        if (arr[left] != arr[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // It's a palindrome
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isPalindrome(arr, n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
