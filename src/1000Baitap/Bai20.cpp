#include<stdio.h>
//bt20 
int main (){
   int n;
   printf("nhap N: ");
   scanf("%d", &n);
   for (int i = 1; i <= n; i++){
       if ( n % i == 0){
           printf("%4d", i);
       }
    }
    return 0; 
}