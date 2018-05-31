#include <stdio.h>
#include <math.h>
#include <stdlib.h>
	int n,a[100],b[1];
	int i,x,j,p;
	int k;
void nhap(int a[],int n){
	int i;
	for ( i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: \n",i);
		scanf("%d",&a[i]);
	}
}
void Swap(int *a, int *b){
	int c;
	 c = *a ;
	*a = *b;
	*b = c;

}
int bubbleSort(int a[],int n){
	for (i = 0; i < n; ++i)
	{
		for (j=n-1;j>i;j--)
		{
			if (a[j]<a[i])
			{
				Swap(&a[i],&a[j]);
			}
		}
	}
}
void Show(int a[],int n){
	for ( i = 0; i < n; ++i)
	{
		printf("%d ",a[i]);
	}
}
void chen(){
	for (i = 0; i < n; ++i)
	{
		if (x <a[i])
		{	
			for (j = n;j>i;j--)
			{
				a[j] = a[j-1];
			}
			a[i]=x;
			break;			
		}else a[n]=x;
	}
	
}
void in(){
	for (i = 0; i < n+1; ++i)
	{
		printf("\n");
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main(int argc, char const *argv[])
{
	
	do
	{
		printf("nhap n:  \n");
		scanf("%d",&n);
	} while (n<2);
	nhap(a,n);
	bubbleSort(a,n);	
	printf("\n");
	Show(a,n);
	printf("nhap x= \n");
	scanf("%d",&x);
	chen();
	in();
	printf("++++++Them X++++++++++++\n");
	printf("\n");
	printf("********** Make by TRUNGDAO *****************************************\n");
	return 0;

}