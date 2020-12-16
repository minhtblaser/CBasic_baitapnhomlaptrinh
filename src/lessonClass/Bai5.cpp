#include<stdio.h>

// int main() {
//     int n;

//     scanf ("%d", &n);
//     int a[1000];
//     for (int i = 0; i < n; i++) {
//         scanf ("%d", &a[i]);
//     }

//     int maxValue = a[0];
//     for (int i = 0; i < n; i++) {
//         if (a[i] > maxValue) {
//             maxValue = a[i];
//         }
//     }
//     printf ("%d", maxValue);
//     return 0;
// }

// --------------------

// int main() {
//     int n;
//     scanf ("%d", &n);
//     int arr[1000];
//     for (int i = 0; i <= n; i++) {
//         scanf ("%d", &arr[i]);
//     }
//     printf("%d", arr[0] + arr[n-1]);
//     return 0;
// }
// ------------------
// int main() {
// 	int arr[100][100];
// 	int n, m;

// 	scanf("%d%d", &n, &m);
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < m; j++) {
// 			scanf("%d", &arr[i][j]);
// 		}
// 	}

// 	int sum = 0;
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < m; j++) {
// 			if (arr[i][j] % 5 == 0) {
// 				sum += arr[i][j];
// 			}
// 		}
// 	}

// 	printf("%d", sum);

// 	return 0;
// }
// -----------------
int main() {
	char str[100];
	scanf ("%s", str);
	printf("%s", str);
	return 0;
}
