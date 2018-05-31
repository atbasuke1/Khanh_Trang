#include <stdio.h>
#include <math.h>
int i,n,S1=0,S2=0,S3=0;
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
		if(Sole(i))
			{
				printf("%d ",i);
				S1=S1+i;
			}

	}
				printf("Tong le= %d\n",S1);

	printf("\n");
	printf("Cac so chan nho hon %d:\n",n);
	for (i = 1; i < n; ++i)
	{
		if(Sochan(i)){
				printf("%d ",i);
				S2=S2+i;
			}
			S3=S3+i;
	}
				printf("Tong chan= %d\n",S2);
				printf("Tong = %d\n",S3);


	return 0;
}