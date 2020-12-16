#include<stdio.h>
//ouput: reserve a string number
int main(){
    int n;
    int a;
    int s = 0;
    printf ("enter a string number: ");
    scanf("%d", &n);
    for (;a != 0;){// nên sử dụng while, sử dụng for khi trong for có cả 3 phần, mình biết được tối đa bao nhiêu lần lặp
    // ví dụ: từ 1->10: mình biết lặp tối đa 10 lần --> sử dụng ffor
        a = n%10;
        n /= 10;
        s = s*10 + a;
    }
    printf("S = %d",s/10);
}