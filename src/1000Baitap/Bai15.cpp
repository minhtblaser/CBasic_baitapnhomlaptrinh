#include<stdio.h>
int main (){
    float S = 0;
    float T = 0;
    int n;
    printf("nhap N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        T += i;
        S += (float) 1/T;
    }
    printf ("S= %5.f ", S);
    return 0;
}