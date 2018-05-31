#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int C=0,n,i;
	printf("nhap n\n");
	scanf("%d",&n);
	for ( i = 1; i <=n; ++i)
	{
		C=C+n*(n-i);
	}
	printf("%d\n",C);

	return 0;
}