#include<stdio.h>
#include<conio.h>


int main()
{
	int i, n;
	int max;
	max = 0;
	do
	{
	printf("\nNhap n: ");
	scanf("%d", &n);
		if(n<0){
			printf("loi: so nhap vao phai >=0!");
		}
	}while(n < 0);
	if(n == 0){
		max = 0;
	}// if,else,... cho dù trong có 1 lệnh thì cũng nên sử dụng {} để dễ nhìn
	do
	{
		i = n % 10;
	   if(i > max)
	   {
		   max = i;
	   }
	}while(n /= 10);

	printf("\nChu so lon nhat la %d", max);
	return 0;
}
