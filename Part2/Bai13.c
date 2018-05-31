#include <stdio.h>
#include <math.h>
#include <stdlib.h>
	int n,a[100],m,b[100];
	int i,x,j,p;
	int k;
void nhap(){
	do
	{
		printf("++ nhap n:  ");
		scanf("%d",&n);
	} while (n<2);
	for ( i = 0; i < n; i++)
	{	k=0;
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	do
	{
		printf("++ nhap m:  ");
		scanf("%d",&m);
	} while (m<2);
	for ( i = 0; i < m; i++)
	{	k=0;
		printf("Nhap b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	do
	{
		printf("Nhap p =  ");
		scanf("%d",&p);
	} while (p > n);
}
void Chenmang(){
	for ( i = p+m; i < m+n; ++i)
	{
		a[i] = a[i-m];
	}
	for (i = p; i < p+m; ++i)
	{
		a[i]=b[i-p];
	}
}
void hienthi(){
	for (i = 0; i < m+n; ++i)
	{
		printf(" %d ",a[i]);
	}
}
int main(int argc, char const *argv[])
{
		
	nhap();
	Chenmang();
	hienthi();
	
	printf("\n");
	printf("********** Make by TRUNGDAO *****************************************\n");
	return 0;

}