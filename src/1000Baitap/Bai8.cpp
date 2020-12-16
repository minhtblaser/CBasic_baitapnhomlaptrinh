#include<stdio.h>
//bt7
int main(){
    int n;
    float S = 0;
    printf ("nhap n: ");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++){
        S += (2*i + 1) /(float) (2*i + 2);
    }
    printf ("S = %.5f", S);
    return 0;
} 