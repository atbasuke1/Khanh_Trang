#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int n,a[100],i,x,k;
	printf("nhap n:  \n");
	scanf("%d",&n);
	for ( i = 0; i < n; ++i)
	{
		printf("nhap a[%d]:  \n",i);
		scanf("%d",&a[i]);
	}
	k=0;
	printf("++  Nhap x = ");
	scanf("%d",&x);
	for ( i = 0; i < n; ++i)
	{
		if(a[i]==x){
			k++;
		}
	}
	printf("\n");
	printf("So lan lap so %d trong mang la %d lan \n",x,k );
	printf("\n");
	printf("**********Make by TRUNGDAO*************************************************\n");
	return 0;

}