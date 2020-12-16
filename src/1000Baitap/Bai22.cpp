#include<stdio.h>
//bt22
int main (){
   int n;
   float S = 1;
   printf("nhap N: ");
   scanf("%d", &n);
   for (int i = 1; i <= n; i++){
       if ( n % i == 0){
           printf("%4d \n", i);
            S *= i; 
       }
    }
    printf("S = %.2f", S);
    return 0; 
}