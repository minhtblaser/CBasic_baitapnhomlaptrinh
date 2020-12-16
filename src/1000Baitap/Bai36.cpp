#include<stdio.h>
#include<math.h>
int main (){
    int n;
    float S = 0;
    float giaithua = 1;
    printf("nhap N: ");
    scanf("%d", &n);
    if ( n <= 1){
        printf("\n %d input > 1, please enter again", n);
        return 0;
    }
   for (int i = 1; i <= n; i++){
       for (int j = 1; j <=i;j++){
           giaithua *=j;
       }
       S = sqrt(S + giaithua);
   }
   printf("S(%d)= %f", n,S);
   return 0;
}



