#include<stdio.h>
int main (){
    int n;
    float S = 0;
    printf ("n: ");
    scanf ("%d", &n);
    // nhap N
    float S = 0;
    for (int i=1; i<=n; i++) {
        S += ((1 + (i-1)) * (1 + (i-1))); 
            }
    printf("S = %.5f",S);// in ra S
    return 0;  
            }