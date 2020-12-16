#include<stdio.h>

int main(){
    int i,n;
    float S = 0;
    i = 0;
    do{
        printf ("\nnhap N: ");
        scanf("%d", &n);
    } while ( n < 0  && printf("Error: (n >= 0)\n"));
    while (S + i < n){
        i++;
        S  += i;
    }
    printf("\n Gia tri k lon nhaty de S(k) = 1+2+3+...+ k <n l la %d", i);
    return 0;
}