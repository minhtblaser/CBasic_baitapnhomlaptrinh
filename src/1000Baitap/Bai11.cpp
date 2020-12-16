#include<stdio.h>
//bt11
int main (){
    int n;
    float S = 0;
    float T = 1;
    printf("nhap n: ");
    scanf ("%d", &n);
    for ( int i = 1;  i <= n; i++){
        T = 1;
        for (int j = 1; j<= i; j++){
            T*=j;
        }
        S+=T;
    }
    printf (" S = %.2f", S);
    return 0;
}