#include <stdio.h>
#include <math.h>
#include <stdlib.h>
	int n,a[100];
	int i = 0,x,max = 0;
	int k;
void nhap(int a[],int n){
	int i;
	for ( i = 0; i < n; ++i)
	{
		do
		{
			printf("nhap a[%d]:  ",i);
			scanf("%d",&a[i]);
		} while (a[i] < 0);
	}
}
void resolve(int a[],int n){
	int i=0,j=0,min;
	printf("Nhap X= ");
	scanf("%d",&x);
	while(i<n-1)
	{			
		min = abs(a[0]-x);
		while (abs(a[i]-x) < min )
		{
			min = abs(a[i]-x);
			j = i;
			i++;
		}
		i++;
	}
	printf("so gan gia tri X nhat la: %d\n",a[j]);
}
int main(int argc, char const *argv[])
{
	
	do
	{
		printf("nhap n:  \n");
		scanf("%d",&n);
	} while (n<2);
	nhap(a,n);
	resolve(a,n);	
	printf("\n");
	printf("********** Make by TRUNGDAO *************************************************\n");
	return 0;

}