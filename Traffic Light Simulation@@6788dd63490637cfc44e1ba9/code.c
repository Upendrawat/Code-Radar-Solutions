#include <stdio.h>

int main(){
    char tl;
    scanf("%c", &tl);
    if(tl == 'R'){
        printf("Stop");
    }
    else if(tl == 'G'){
        printf("Go");
    }
    else if(tl == 'Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}