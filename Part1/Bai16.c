#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int C=0,n,i;
	printf("nhap n\n");
	scanf("%d",&n);
	for ( i = 1; i <n; ++i)
	{
		if(i%7==0){
			C=C+i;
		}
	}
	printf("%d\n",C);
printf("\n");
	printf("**********Make by TRUNGDAO*************************************************\n");
	return 0;
}