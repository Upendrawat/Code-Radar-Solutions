#include <stdio.h>

int main(){
    struct Rectangle{
        int length;
        int breadth;
    };
    int N;
    scanf("%d", &N);
    struct Rectangle rectangles[N];
    for (int i=0; i<N; i++){
        scanf("%d %d", &rectangles[i].length, &rectangles[i].breadth);
    }
    for(int i=0; i<N;i++){
        float Area = rectangles[i].length * rectangles[i].breadth;
        float Perimeter = 2*(rectangles[i].length+rectangles[i].breadth);
        printf("Rectangle %d: Area = %.2f, Perimeter: %.2f\n", i+1, Area, Perimeter );
    }
    return 0;
}


