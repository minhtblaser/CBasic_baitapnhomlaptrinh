#include<stdio.h>
#include<math.h>
int gt(int n)
{
    int c = 1;
    for(int i = 1; i <= n;  i++)
    {
        c *= i;
        while(c % 10 == 0 && c > 99)
        {
            c/=10;
        }
        c %= 100;
    }
    return c % 10;
}
int lastDigitDiffZero(int n)
{
    return gt(n);
}
