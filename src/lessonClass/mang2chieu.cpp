#include <stdio.h>
void NhapMaTran(int a[][100], int m, int n);
void XuatMaTran(int a[][100], int m, int n);
void findpositionOfMin(int a[][100], int m, int n);
void findpositionOfMax(int a[][100], int m, int n);
int Max (int a[100][100], int n, int m);
bool isCheckTriangleMaxtrix (int a[][100], int n, int m);

void NhapMaTran(int a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
      {
         printf("A[%d][%d] = ", i, j);
         scanf("%d", &a[i][j]);
      }
}
 
void XuatMaTran(int a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
         printf("%d\t", a[i][j]);
      printf("\n");
   }
}
int Max (int a[100][100], int n, int m){
   int temp = a[0][0];
   for(int i = 0;  i < m; i++){
      for(int j = 0; j < n;j++){
         if(temp < a[i][j]){
            temp = a[i][j];
         }
      }
   }
   return temp;
}
int Min (int a[100][100], int n, int m){
   int temp = a[0][0];
   for(int i = 0;  i < m; i++){
      for(int j = 0; j < n;j++){
         if(temp > a[i][j]){
            temp = a[i][j];
         }
      }
   }
   return temp;
}
void findpositionOfMin(int a[][100], int m, int n){
   int column = 0, raw = 0;
   int min = a[0][0];
   for (int i = 0; i < m; i++){
      for (int j = 0; j < n; j++){
         if(a[i][j] < min){
            raw = i;
            column = j;
         }
      }
   }
   printf("\nposition of min in matrix is [%d][%d]", raw, column);
}
void findpositionOfMax(int a[][100], int m, int n){
   int column = 0, raw = 0;
   int max = a[0][0];
   for (int i = 0; i < m; i++){
      for (int j = 0; j < n; j++){
         if(a[i][j] > max){
            raw = i;
            column = j;
         }
      }
   }
   printf("\nposition of max in matrix is [%d][%d]", raw, column);
}
bool isCheckTriangleMaxtrix (int a[][100], int n, int m){
   for (int i = 0; i < n; i++){
      for (int j = 0; j < i; j++){
         if (a[i][j] == 0){
            return true;
         } else {
            return false;
         }
      }
   }
}
void printfTriangelMaxtrix(int a[][100], int n, int m){
   if(isCheckTriangleMaxtrix(a,n,m)){
      printf("\nMatrix is triangle matrix");
   } else {
      printf("\nMaxtrix is not triangle matrix");
   }
}

int main(){
   int a[100][100];
   int m,n;
   printf("nhap so cot n = "); scanf("%d",&n);
   printf("nhap so hang m = "); scanf("%d",&m);
   printf("nhap vao ma tran:\n");
   NhapMaTran(a, m , n);
   XuatMaTran(a, m, n);dwdwdwdưddwdeew
   printf("\nthe max number in matrix is %d", Max(a,n,m));
   printf("\nthe min number in matrix is %d", Min(a,n,m));
   findpositionOfMin(a,n,m);
   findpositionOfMax(a,n,m);
   printfTriangelMaxtrix(a,n,m);
}


hello world