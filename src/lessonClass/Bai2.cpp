#include<stdio.h>

int main(){
    char a[100];
    int n;
    float S;
    int x;
    printf("nhap ten cua ban: ");
    scanf("%s", &a[100]);
    printf("nhap tien luong cua ban: ");
    scanf("%d", &n);
    printf("nhap he so luong cua ban: ");
    scanf("%d", &x);
    S = (n*x) - (n*0.015) - (n*0.02);
    printf("Luong cua ban %.2f", S);
}