#include <stdio.h>
#define MAXSIZE 1000
int sumOfArray(int a[], int n);
int main() {
    int n,temp;
    int arr[MAXSIZE];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        a[i] = temp;
    }
    printf("%d", sumOfArray(arr, n));
    return 0;
}
int sumOfArray(int a[], int n) {
    if (n == 1) return a[0];
    return a[n-1] + sumOfArray(a,n-1);
}