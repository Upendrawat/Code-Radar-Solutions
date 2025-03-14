#include <stdio.h>

int main(){
    struct Rectangle{
        int length;
        int breadth;
    };
    int N;
    scanf("%d", &N);
    struct Rectangle stud[N];
    for (int i=0; i<N; i++){
        scanf("%d %d", &stud[i].length, &stud[i].breadth);
    }
    for(int i=0; i<=N;i++){
        float Area, Perimeter;
        printf("Rectangle %d: Area = %.2f, Perimeter: %.2f\n", i+1, stud[i].length*stud[i].breadth, 2*(stud[i].length+stud[i].breadth) );
    }
    return 0;
}


