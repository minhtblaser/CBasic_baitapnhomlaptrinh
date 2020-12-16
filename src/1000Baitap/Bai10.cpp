#include<stdio.h>
#include<math.h>
// bt10
int main(){
    int x,n;
    float mu;
    printf ("n: ");
    scanf ("%d", &n);
    printf ("x: ");
    scanf ("%d", &x);
    mu = pow(x,n);
    printf ("%d ^ %d = %.2f", x,n, mu);
    return 0;

}