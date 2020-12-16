#include<stdio.h>
//bt9
int main (){
    int n;
    float S = 1;
    printf("nhap n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        S = S * i;
    }
    printf ("S = %.5f", S);
    return 0;
}