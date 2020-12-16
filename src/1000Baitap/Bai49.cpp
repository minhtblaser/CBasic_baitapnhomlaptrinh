#include <stdio.h>

int main (){
    int themang, n,i;
    printf("nhap N : ");
    scanf ("%d", &n);
    themang = n;
    while ( themang != 0){
        i = themang % 10;
        themang /= 10;
    }
    printf("Chu so dau tien la %d", i);
    return 0;
}