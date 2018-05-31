#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i,a[100],n,k;
	k=0;
	printf("Nhap n = \n");
	scanf("%d",&n);
	for ( i = 0; i < n; ++i)
	{
		printf("\t Nhap a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for ( i = 0; i < n; ++i)
	{
		if (a[i]==a[i+1])
		{
			if (a[i+1]==a[i+2])
			{
				k=k+2;
			}
			else k++;			
		}
	}
	printf("So cap trung nhau la: %d\n",k);
	printf("\n");
	printf("**********  Code by TRUNGDAO  ***********************************\n");
	return 0;
}