// #include <stdio.h>
// #include <string.h>

// int main(){
//     char str[100];
//     scanf("%s", &str);
//     printf("%s", strrev(str));
// }


#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];

    printf("Enter a string: ");
    scanf("%99s", str);  

    strcpy(rev, str);  // Copy original string
    strrev(rev);       // Reverse the copied string

    printf("Reversed string: %s\n", rev);

    return 0;
}
