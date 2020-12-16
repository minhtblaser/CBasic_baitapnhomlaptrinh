#include<stdio.h>
#include<math.h>
int main()
{
	long themang, n;
	int sochuso = 0;
	printf("\nNhap n: ");
	scanf("%ld", &n);
	themang = n;
	if(n == 0)
			sochuso = 1;
	while(themang != 0)
	{
		if(themang % 2 == 1)
		{
		sochuso = sochuso + 1;
		}
		themang = themang / 10;
	}
	printf("\nSo chu so le cua %ld la %d", n, sochuso);
	return 0;
}

