#include<stdio.h>
//bt7
int main(){
    int n;
    float S = 0;
    printf ("nhap n: ");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++){
        S += i /(float) (i + 1);
    }
    printf ("S = %.5f", S);
    return 0;
} 

