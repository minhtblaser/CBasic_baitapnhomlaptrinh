#include<stdio.h>
#include<math.h>
// bt17
int main (){
    float S = 0;
    float M = 1;
    int n, x;
    printf("nhap n: ");
    scanf ("%d", &n);
    printf("nhap x: ");
    scanf ("%d", &x);
    for (int i = 1; i <= n; i++ ){
        M = 1;
        for (int j = 1; j <= i; j++){
            M *= j;
        }
        S += pow(x,i)/(float)M; 
    }
    printf("S = %.5f", S);
    return 0;
    
}