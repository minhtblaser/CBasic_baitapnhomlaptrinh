#include<stdio.h>
#include<math.h>
int main (){
    int n;
    int x;
    float S  = 0;
    printf("nhap x: ");
    scanf("%d", &x);
    printf("nhap n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        S += pow (x, 2*i+ 1);
    } 
    printf("S = %.5f", S);
    return 0;
}
