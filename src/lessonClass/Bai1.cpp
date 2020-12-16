#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2,x3,y3;
    float AB = 0, AC = 0 ,BC = 0;
    float CV = 0, DT = 0;
    printf ("nhap toa do A (x1): ");
    scanf ("%d", x1);
    printf ("nhap toa do A (y1): ");
    scanf("%d", y1);
    printf ("nhap toa do B (X2): ");
    scanf ("%d", x2);
    printf ("nhap toa do B (y2): ");
    scanf("%d", y2);
    printf ("nhap toa do C (x3): ");
    scanf ("%d", x3);
    printf ("nhap toa do C (y3): ");
    scanf("%d", y3);
    AB += sqrt(((x2 - x1)*(x2- x1)) + ((y2 - y1)*(y2- y1)));
    AC += sqrt(((x3 - x1)*(x3- x1)) + ((y3 - y1)*(y3- y1)));
    BC += sqrt(((x3 - x2)*(x3- x2)) + ((y3 - y2)*(y3- y2)));
    CV += AB + AC + BC;
    DT += 1/2 * abs((x2-x1)*(y3-y1) - (x3-x1)*(y2-y1));
    printf("Chu vi %.2f", CV);
    printf("Dien tich %.2f", DT);
    return 0;
}