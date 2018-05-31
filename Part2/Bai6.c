#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	double h;
	int n,a[100],i,b,c,k,j;
	k=0;
	j=0;	
	printf("nhap n:  \n");
	scanf("%d",&n);
	for ( i = 0; i < n; ++i)
	{
		printf("nhap a[%d]:  \n",i);
		scanf("%d",&a[i]);
		
	}
	printf("====================================\n");
	do
	{
		printf("Nhap b,c\n");
	scanf("%d %d",&b,&c);
	} while (b>c);
	for (i = b; i <=c; ++i)
	{
		k=k+a[i];
		j++;
	}
	h=(double)k/j;
	printf(" %5.2f \n",h);
	printf("\n");
	printf("********** Make by TRUNGDAO *************************************************\n");
	return 0;

}