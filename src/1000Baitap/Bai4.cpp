#include<stdio.h>
//bt4
int main() {
    int n;
    float S = 0;
    printf ("enter N: ");
    scanf ("%d", &n);
    for ( int i=1; i<=n; i++) {
        S += (float) 1 / (i*2);
    }
    printf("S = %.5f", S);
    return 0;
    
}