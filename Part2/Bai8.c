#include <stdio.h>
#include <math.h>

int ngto(int a){
	int i;
	if(a<2) return 0;
	else{
		if(a%2==0) return 0;
		else{
			for ( i = 3; i <=sqrt(a); ++i){
				if(a%i==0) return 0;
			}
		}		
	}
	
	return 1;
}
int main(int argc, char const *argv[])
{	
	int N,a[100],i,h,k,S1,S2;	
	k = 0;
	h = 0;
	 
	S1=0;S2=0;
	do
	{
		printf("nhap N:  \n");
	scanf("%d",&N);
	} while (N<0||N>10000);
	for ( i = 0; i < N; ++i)
	{
		printf("nhap a[%d]:  \n",i);
		scanf("%d",&a[i]);
	}
	for (i = 0; i < N; ++i)
	{
		if(a[i]<0){
			S1 = S1+a[i];
			k++;
		}
		if (a[i]>0)
		{
			S2= S2+a[i];
			h++;
		}
	}
	for (i = 0; i < N; ++i)
	{
		if (ngto(a[i]))
		{
			printf("So nguyen to =  ");
			printf("%d\n",a[i]);
		}
	}
	if (k!=0)
	{
	printf("\n");
	printf("trung binh cong so am: %5.2f\n ", (float)S1/k);
	}
	if (h!=0)
	{
		printf("trung binh cong so duong: %5.2f\n",(float)S2/h);
	}
	printf("\n");
	printf("********** Make by TRUNGDAO *************************************************\n");
	return 0;

}