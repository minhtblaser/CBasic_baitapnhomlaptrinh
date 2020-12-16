#include <stdio.h>
int main (){
    int n;
    float S = 0;
    printf ("Nhap N: "); 
    scanf ("%d", &n);
    for (int i = 1; i<=n; i++) {
        S += 1/(float)(i*(i+1));
    }
    printf ("S = %.5f", S);
    return 0;
}