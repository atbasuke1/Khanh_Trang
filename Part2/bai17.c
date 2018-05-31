#include <stdio.h>
#include <stdlib.h>
int a[100],n,i,k=0;
void Nhap(int a[100],int n){
	printf("Nhap n \n");
	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		printf("Nhap a[%d]\n",i);
		scanf("%d",&a[i]);
	}
}

int main(int argc, char const *argv[])
{
	Nhap(a,n);
	for (i = 0; i < n; ++i)
	{
		if(a[i]>k){
			k=a[i];
			printf("%d\n",k);
		}
	}
	for (i = 0; i < n; ++i)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}