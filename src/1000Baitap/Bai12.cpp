#include<stdio.h>
#include<math.h>
int main(){
int x;
int n;
float S = 0;
printf("nhap x: ");
scanf("%d", &x);
printf ("nhap n: ");
scanf("%d", &n);
for (int i = 1; i <= n; i++){
    S += pow(x,i);
}
printf ("S = %5.f", S);
return 0;
}