#include<stdio.h>
//bt24
int main (){
   int n;
   int count = 0;
   printf("nhap N: ");
   scanf("%d", &n);
   for (int i = 1; i <= n; i++){
       if ( n % i == 0){
            if ( i % 2 == 0 ){
                printf("%d ", i);
                    count++;
            }
       }
    }
    printf(" \n count: %d", count);
    return 0; 
}