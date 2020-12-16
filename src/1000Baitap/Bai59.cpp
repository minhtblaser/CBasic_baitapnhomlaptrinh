#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int sochuso, songhichdao,themang;
	int chuso;
	// Nhập n ( n > 0 )
	do
	{
		printf("\nNhap vao n ( n > 0 ): ");
		scanf("%d", &n);
		if (n <= 0)
		{
			printf("\nGia tri ban nhap vao khong hop le. Xin vui long nhap lai! ");
		}

	} while (n <= 0);

	sochuso = (int)log10((float)n) + 1;// khai báo sau {}
	printf(" so chu so %d",sochuso);
	songhichdao = 0;// viết thường
	themang = n;
	printf("\nSo %d co phai la so doi xung hay khong ?\n", n);
	while (themang != 0)
	{
		chuso = themang % 10; // Lấy chữ số ra
		themang /= 10; // Bỏ chữ số vừa lấy ra
		songhichdao += chuso * pow(10.0, --sochuso);
	}
	/*while(themang != 0)
	{
		songhichdao = songhichdao * 10 + themang % 10;
		themang /= 10;
	}*/
	if(songhichdao == n)
	{
		printf("Dung !");
	}
	else
	{
		printf("khong !");
	}
	return 0;

}