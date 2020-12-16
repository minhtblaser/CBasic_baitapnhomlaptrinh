#include<stdio.h>
#include<math.h>
int main (){
    int n;
    float S = 0;
    printf("nhap N: ");
    scanf("%d", &n);
    if ( n <= 2){
        printf("\n %d input >= 2, please enter again", n);
        return 0;
    }
   for (int i = 1; i <= n; i++){
       S = pow((i + S) * 1.0, 1.0/i);
   }
   printf("S = %f",S);
   return 0;
}