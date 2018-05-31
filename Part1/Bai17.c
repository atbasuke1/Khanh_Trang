#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{	
	int n,K=0,i;
	printf("nhap n\n");
	scanf("%d",&n);
	for ( i = 1; i < n; ++i)
	{
		if(n%i==0) {printf("%d\n",i); K++;}
	}
	printf("%d\n",K);
	printf("\n");
	printf("**********Make by TRUNGDAO*************************************************\n");
	return 0;
}