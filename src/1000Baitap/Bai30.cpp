 
#include<stdio.h>
bool check(int n){
    int sum = 0;//khai bao biem sum
    for(int i=1;i<=n/2;i++){
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) return true; // tra ve true
    return false;
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    if(check(n) )
        printf("%d la so hoan hao.",n);
    else
        printf("%d khong phai la so hoan hao.",n);
    return 0;
}