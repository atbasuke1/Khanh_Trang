#include <stdio.h>
#include <math.h>
void Swap(int *a,int *b){
	int c;
	 c = *a;
	*a = *b;
	*b = c;
}
int main(int argc, char const *argv[])
{
	int i,j,n,a[100];
	printf("nhap n: \n");
	scanf("%d",&n);
	for ( i = 0; i <n; ++i)
	{
		printf("nhap a[%d]: \n",i);
		scanf("%d",&a[i]);
		
	}
	for ( i = 0; i <n-1; i++)
	{
		for (j = n-1; j>i; j--)
		{
			if(a[j] < a[j-1]){
			Swap(&a[j-1],&a[j]);
		}	
		}
	}
	for ( i = 0; i <n; ++i)
	{
			printf("%d   ",a[i]);
		
	}
	printf("\n");
	printf("**********Code by TRUNGDAO*************************************************\n");
	return 0;
}