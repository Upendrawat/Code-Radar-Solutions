int main(){
    struct Rectangle{
        int length;
        int breadth;
    };
    int N;
    scanf("%d", &N);
    struct Rectangle stud[N];
    for (int i=0; i<n; i++){
        scanf("%d %d", &length, &breadth);
    }
    for(int i=0; i<=N;i++){
        float Area, Perimeter;
        printf("Rectangle %d: Area = %f, Perimeter: %f\n", i+1, stud[i].length*stud[i].breadth, 2(stud[i].length+stud[i].breadth) );
    }
}