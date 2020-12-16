#include<stdio.h>
#include<math.h>
int main (){
    int n;
    float S = 0;
    printf("nhap N: ");
    scanf("%d", &n);
    if ( n <= 1){
        printf("\n %d input > 1, please enter again", n);
        return 0;
    }
   for (int i = 1; i <= n; i++){
       S = sqrt(i + S);
   }
   printf("S(%d)= %f", n,S);
   return 0;
}