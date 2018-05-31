#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int n,a[100],k,h,i;
	k= 0;
	h=0;
	printf("nhap n:  \n");
	scanf("%d",&n);
	for ( i = 0; i < n; ++i)
	{
		printf("nhap a[%d]:  \n",i);
		scanf("%d",&a[i]);
		if(a[i]%2==0) k++;
		if(a[i]%2!=0) h++;
	}
	printf("\n");
	printf("so chan = %d\n so le = %d",k,h );
	printf("\n");
	printf("********** Make by TRUNGDAO *************************************************\n");
	return 0;

}