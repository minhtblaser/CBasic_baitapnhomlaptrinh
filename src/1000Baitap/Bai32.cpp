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
    S = sqrt((float)2);
    for (int i = 2; i <= n; i++){
        S = sqrt(2 + S);
    }
    printf("S = %f", S);
    return 0;
}