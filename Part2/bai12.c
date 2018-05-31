#include <stdio.h>
#include <math.h>
#include <stdlib.h>
	int n,a[100];
	int i,x,j;
	int k;
void nhap(int a[],int n){
	int i;
	for ( i = 0; i < n; i++)
	{	k=0;
		printf("Nhap a[%d]: \n",i);
		scanf("%d",&a[i]);
		for (j=0; j<=i-1; j++)
		{
			if (a[i] == a[j])
			{
				k=1;
				break;			}
		}
		if (k == 1)
		{
			i=i-1;
		}
	}
}
int main(int argc, char const *argv[])
{
	
	do
	{
		printf("nhap n:  \n");
		scanf("%d",&n);
	} while (n<2);
	nhap(a,n);	
	printf("\n");
	printf("********** Make by TRUNGDAO *****************************************\n");
	return 0;

}