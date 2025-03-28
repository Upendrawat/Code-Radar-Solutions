#include <stdio.h>
#include <limits.h>

#define MAX 100000  

int main() {
    int n;
    scanf("%d", &n);  
    int arr[n], freq[MAX] = {0};  
    int maxFreq = 0, minElement = INT_MAX;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;

        if (freq[arr[i]] > maxFreq) {
            maxFreq = freq[arr[i]];
            minElement = arr[i];  // Set this as the most frequent element
        } else if (freq[arr[i]] == maxFreq && arr[i] < minElement) {
            minElement = arr[i];  // Choose the smaller element in case of tie
        }
    }

    printf("%d\n", minElement);  // Output the result

    return 0;
}
