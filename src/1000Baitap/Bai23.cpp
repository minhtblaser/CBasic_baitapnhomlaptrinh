#include<stdio.h>
//bt23
int main (){
   int n;
   float S = 1;
   int count = 0;
   printf("nhap N: ");
   scanf("%d", &n);
   for (int i = 1; i <= n; i++){
       if ( n % i == 0){
           printf("%4d \n", i);
            count ++;
       }
    }
    printf("Count = %d", count);
    return 0; 
}