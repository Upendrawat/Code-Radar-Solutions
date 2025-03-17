#include <stdio.h>
#include <string.h>

// int main(){
//     char str[100];
//     scanf("%s", &str);
//     printf("%s", strrev(str));
// }

void reverseString(char str[]) {
    int len = strlen(str);
    int start = 0, end = len - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
