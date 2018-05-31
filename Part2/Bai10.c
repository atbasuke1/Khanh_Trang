#include <stdio.h>
#include <math.h>
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
void swap(int *a, int *b){
	int c;
	c=*a;
	*a = *b;
	*b = c;
}
void Sapxep(int a[],int n){
	int i,j;
	for ( i = 0; i < n; ++i)
	{
		for (j=n-1;j>=i; j--)
		{
			if (a[j]<a[i])
			{
				swap(&a[j],&a[i]);
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	int n,a[100];
	int i = 0,x = 0,max = 0;
	int k;
	do
	{
		printf("nhap n:  \n");
		scanf("%d",&n);
	} while (n<2);
	nhap(a,n);	
	Sapxep(a,n);
	for ( i = 0; i < n; ++i)
	{
		printf("%d ",a[i]);
	}
	i=0;
	while(i < n-2){
		k = 1;
		while(a[i] == a[i+1]){
			k++;
			i++;
		}
		if (max < k)
		{
			max = k;
			x = i;
		}
		i++;
	}
	printf("\n");
	printf("hello %d\n",k);
	printf("hi    %d \n",a[x]);
	printf("\n");
	printf("********** Make by TRUNGDAO *************************************************\n");
	return 0;

}