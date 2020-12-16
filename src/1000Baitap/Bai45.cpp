#include <stdio.h>
#include <math.h>

int main(){
    int S = 1;
    int themang, n;
    do {
        printf("\n Nhap n: ");
        scanf ("%d", &n);
    } while (n < 0 && printf("error: n >0"));
    themang = n;
    while (themang != 0){
        S *= themang % 10;
        themang /= 10;
    }
    printf("S = %d", S);
    return 0;
}