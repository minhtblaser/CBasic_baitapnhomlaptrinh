#include <stdio.h>

int sum(int n) {
    if (n == 1) return 1;
    printf(" %d  ", n );
    return n + sum(n-3);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}