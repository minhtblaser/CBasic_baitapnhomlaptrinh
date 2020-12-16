#include<stdio.h>
 
int main(){
    int S = 0;
    int i = 0;
    while(S + i < 10){
        S += i;
        i++;
    }
    printf("S = %d", S);
}