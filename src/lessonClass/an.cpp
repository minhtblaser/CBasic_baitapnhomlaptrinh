#include<stdio.h>
void input(int &n, int a[]);
void output(int n, int a[]);
int main(){
    int n; 
    int a[100];
    input(a,n);
    output(a,n);
    return 0;
}
void input(int &n, int a[]){
    printf("nhap N: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("nhap so a[%d] ", i);
        scanf("%d", &a[i]);
    }
}
void output(int n, int a[]){
    printf("your number is here \n");
    for (int i = 0; i < n; i++){
        printf("%d", a[i]);
    }
}