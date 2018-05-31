#include <stdio.h>
#include <math.h>
int i,n;
int Sole(int i){
	if(i%2!=0) return 1;
	else return 0;
}
int Sochan(int i){
	if(i%2==0) return 1;
	else return 0;
}
int main(int argc, char const *argv[])
{
	printf("Nhap n: \n");
	scanf("%d",&n);
	printf("+ Cac so le nho hon %d: \n",n);
	for (i = 1; i < n; ++i)
	{
		if(Sole(i)) printf("%d ",i);
	}
	printf("\n");
	printf("Cac so chan nho hon %d:\n",n);
	for (i = 1; i < n; ++i)
	{
		if(Sochan(i)) printf("%d ",i);
	}
	return 0;
}