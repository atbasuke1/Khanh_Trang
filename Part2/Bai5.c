#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int n,a[100],max,max2,k,i;
	max = 0;
	k=0;
	max2 = 0;
	printf("nhap n:  \n");
	scanf("%d",&n);
	for ( i = 0; i < n; ++i)
	{
		printf("nhap a[%d]:  \n",i);
		scanf("%d",&a[i]);
		if(a[i]>max) max = a[i];
	}
	for ( i = 0; i < n; ++i)
	{
		if (max == a[i])
		{
			a[i]=0;
		}
	}
	for ( i = 0; i < n; ++i)
	{
		if (a[i]> max2)
		{
			max2 = a[i];
		}
	}

	printf("\n");
	printf("so lon thu 2 la: %d\n", max2);
	printf("\n");
	printf("**********Make by TRUNGDAO*************************************************\n");
	return 0;

}