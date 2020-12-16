#include<stdio.h>
//bt24
int main (){
   int n;
   float S = 1;
   printf("nhap N: ");
   scanf("%d", &n);
   for (int i = 1; i <= n; i++){
       if ( n % i == 0){
            if ( i % 2 != 0 ){
                printf("%d ", i);
            }
       }
    }
    return 0; 
}