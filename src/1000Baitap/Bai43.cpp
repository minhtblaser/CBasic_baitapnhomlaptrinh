#include <stdio.h>
#include<math.h>
int main (){
    long n, themang;
    int chuso;
    do {
        printf ("\n Nhap N: ");
        scanf ("%ld", &n);
    } while ( n < 0 && printf("\n Loi: n >= 0 !"));
        chuso = 0;
        themang = n;
        if (n == 0)
        chuso = 1;
    while (themang != 0){
        chuso += 1;
        themang = themang / 10;
    }
    printf("\n so chu so cua %ld la %d",n ,chuso);
    return 0;
}
