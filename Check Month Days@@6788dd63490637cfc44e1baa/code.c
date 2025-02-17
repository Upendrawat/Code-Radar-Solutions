#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    // switch(num){
    //     case 1:
    //     printf("31");
    //     break;
    //     case 2:
    //     printf("28");
    //     break;
    //     case 3:
    //     printf("31");
    //     break;
    //     case 4:
    //     printf("30");
    //     break;
    //     case 5:
    //     printf("31");
    //     break;
    //     case 6:
    //     printf("30");
    //     break;
    //     case 7:
    //     printf("31");
    //     break;
    //     case 8:
    //     printf("31");
    //     break;
    //     case 9:
    //     printf("30");
    //     break;
    //     case 10:
    //     printf("31");
    //     break;
    //     case 11:
    //     printf("30");
    //     break;
    //     case 12:
    //     printf("31");
    //     break;
    //     default:
    //     printf("Invalid month");
    //     break;
    // }

    if(num==1 ||num==3 || num==5 || num==7 ||num==8 ||num==10 ||num==12){
        printf("31");
    }
    else if(num==4 ||num==6 ||num==9 ||num==11){
        printf("30");
    }
    else if(num==2){
        printf("28");
    }
    else{
        printf("Invalid month");
    }
}