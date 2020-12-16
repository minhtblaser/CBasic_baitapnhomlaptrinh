#include<stdio.h>
//bt3
int main () {
    int n;
    float S = 0;
    do{
    printf("nhap n: ");
    scanf("%d",&n);
    } while (n < 05)
    for (int i=1; i<=n; i++){
        S += 1/(float) i ;// ép kiểu dang so thap phan
    }
    printf ("S = %.5f", S);// in ra S
    return 0;
}