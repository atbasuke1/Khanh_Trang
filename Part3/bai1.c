#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int j;
int SNT(int n){
	if (n<2) return 0;
	for ( j = 2; j <=sqrt(n); ++j){
			if(n%j == 0) return 0;
	}	
	return 1;
}
int CSNT(int n){
	int k;

	do{
		k=n%10;
		if (!SNT(k))
		{
			return 0;
		}
		n=n/10;
	}while(n>0);
	return 1;
}
int DaoNguoc(int n){
		n=n/10;
		if (!SNT(n))
		{
			return 0;
		}
	return 1;
}
int main(int argc, char const *argv[])
{
	int i;
	for (i = 1000000; i <= 9999999; ++i)
	{
		if(SNT(i)) printf("%d ",i);
	}
	printf("B,\n ++++++++++++++++++\n");
	for (i = 1000000; i <= 9999999; ++i)
	{
		if(CSNT(i)) printf("%d ",i);
	}
	printf("\n**************\n");
	for (i = 1000000; i <=9999999; ++i)
	{
		if (DaoNguoc(i)) printf("%d ",i);
	}
	return 0;

}