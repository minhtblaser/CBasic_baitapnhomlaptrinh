#include<stdio.h>
//bt21
int main (){
   int n;
   float S = 0;
   printf("nhap N: ");
   scanf("%d", &n);
   for (int i = 1; i <= n; i++){
       if ( n % i == 0){
           printf("%4d \n", i);
            S += i; 
       }
    }
    printf("S = %f", S);
    return 0; 
}