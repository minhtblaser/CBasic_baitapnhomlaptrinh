#include<stdio.h>
int main () {
    int n;
    float S = 0;
    printf ("nhap N: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        S += 1/ float ((2*i) +1);
        }
    printf ("S = %.5f", S);    
    return 0;
    }
