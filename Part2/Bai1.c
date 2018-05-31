#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int n,a[100],max,i;
	max = 0;
	printf("nhap n:  \n");
	scanf("%d",&n);
	for ( i = 0; i < n; ++i)
	{
		printf("nhap a[%d]:  \n",i);
		scanf("%d",&a[i]);
		if(a[i]>max) max = a[i];
	}
	printf("\n");
	printf("so lon nhat la: %d\n", max);
	printf("\n");
	printf("********** Make by TRUNGDAO *************************************************\n");
	return 0;

}