#include<stdio.h>
#include<math.h>
int main (){
    int n;
    float S = 0;
    printf("nhap N: ");
    scanf("%d", &n);
    if ( n <= 1){
        printf("\n %d input >= 1, please enter again", n);
        return 0;
    }
   for (int i = 1; i <= n; i++){
       S = pow((i + S) * 1.0, 1.0/(i + 1));
   }
   printf("S = %f",S);
   return 0;
}