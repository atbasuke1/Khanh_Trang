#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int i,k,a[100],n;
void Nhap(int a[],int n){
	for ( i = 0; i < n; ++i)
	{
		printf("nhap a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
void Ktra(){
	for ( i = 0; i < n; ++i)
	{
		if(a[i] < a[i-1]){
			printf("k tang dan\n");
			printf("do phan tu a[%d] = %d \n",i,a[i]);
			break;
		}
	}
	
	for (i = 0; i < n; ++i)
	{
		if(a[i] < a[i+1]){
			k++;
		}
	}
	if(k==n-1){
		printf("tang dan\n");
	}
}
int main(int argc, char const *argv[])
{	
	do
	{
		printf("nhap n = ");
		scanf("%d",&n);
	} while (n<2);
	Nhap(a,n);
	Ktra();
	return 0;
}