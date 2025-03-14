int main(){
    struct Rectangle{
        int length;
        int breadth;
    };
    int n;
    float Area, Perimeter;
    scanf("%d", &n);
    struct Rectangle stud[n];
    for (int i=0; i<n; i++){
        scanf("%d %d", &length, &breadth);
    }
    for(int i=1; i<=n;i++){
        printf("Rectangle %d: Area = %f, Perimeter: %f\n", n, length*breadth, 2(length+breadth) );
    }
}