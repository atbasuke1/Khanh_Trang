#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int i,j;
int SNT(int n){
	if(n<2) return 0;
	for (j = 2; j <= (int) sqrt(n); ++j)
	{
		if(n%j==0) return 0;
	}
	return 1;
}
void INSNT(){
	for (i = 0; i < 999; ++i)
	{
		if (SNT(i)) printf("%d ",i);
	}
}

int TN(int i){
	int n =i;
	int k=0;
	while(n>0){
			k = k*10 + n%10;
			n /= 10;
	}
	if(k==i) return 1;
	return 0;
}
void SOTN(){
	
	for (i = 10; i < 999; ++i)
	{	
		if (TN(i)) printf("%d\n",i);
		
	}
}
int TM(int n){
	int k = 0;
	while(n>0){
		k = n%10;
		if(k == 4) return 0;
		n=n/10;	
	}
	return 1;
}
void Not4(){
	for (i = 0; i < 999; ++i)
	{
		if(TM(i)) printf("%d ",i);
	}
}
int main(int argc, char const *argv[])
{	

	INSNT();
	printf("\n=============thuan ngich===========\n");
	SOTN();
	printf("\n============== Khong chu so 4=========\n");
	Not4();
	printf("\n");
	printf("********** Code by TRUNGDAO **************************************\n");
	return 0;
}