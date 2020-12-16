#include <stdio.h>
#include<math.h>
int main (){
    long n, themang;
    int S = 0;
    printf("nhap N: ");
    scanf("%ld", &n);
    themang = n;
    while ( themang != 0){
        if (themang  % 2 == 0){
            S +=1;
        }
            themang /= 10;
    }
    printf("S = %d", S);
    return 0;
}