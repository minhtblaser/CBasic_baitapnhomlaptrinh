#include<stdio.h>
int main (){
    float S = 0;
    float T = 1;
    float M = 0;
    int n;
    int x;
    printf ("nhap n: ");
    scanf ("%d", &n);
    printf("nhap x: ");
    scanf ("%d", &x);
    for (int i = 1; i <= n; i++){
        T = T * x;
        M = M + i;
        S += (float) T / M;
    }
    printf("S = %.5f", S);
    return 0;
}