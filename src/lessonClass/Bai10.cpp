#include<stdio.h>
int main(){
    int n;
    int a[100];
    int count = 1;
    int tam;
    int x;
    printf("enter the number x: ");
    scanf("%d", &x);
    printf("enter the number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("nhap a[%d]", i);
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n; i++){
        for (int j = 0; j < i; j++){
              if(a[j]==a[i]){
                     tam = 0;
                        break;
                            } else {
                                tam = 1;
                            }
                            }
                            if(tam == 1)
                                count++;
                            }
                                    printf("so khac nhau %d \n", count);
        for (int i = 1; i < n; i++){
            for (int j = 0; j < i; j++){
                if(a[i] + a[j] == x){
                    printf("%d,%d ", a[i], a[j]);
                }
            }
        }
    }


