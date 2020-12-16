// những bài tập này khá thú vị để rèn kiến thức căn bản nè
 //Tính S(n) = 1 + 2 + 3 + … + n
 #include<stdio.h>
 int main(){
     int n;
     float S = 0;
     // nhap n
     printf("n: ");
     scanf("%d",&n);
     // tinh S
     for(int i=0;i<=n;i++){
         S += i;
     }
     printf("S = %.5f",S);// in ra S
     return 0;
 }