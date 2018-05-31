#include <stdio.h>
#include <math.h>
#include <string.h>
int NT(int a){
	int i;
	if(a<2) return 0;
	else{
		for (i = 2; i <= sqrt(a); ++i)
		{
			if(a%i == 0) return 0;
		}
		return 1;
	}
}
int TongNT(int n){
	int i =0;
	while(n>0){
		i += n%10;
		n /= 10;
	}
	if (NT(i)) return 1;
}
void SumNT(){
	int i;
	for (i = 0; i < 999; ++i)
	{
		if(TongNT(i)) printf("%d ",i);
	}
}
int Tang(int n){
	int j,t=0;
	int k,Dem = 0;
	k = 10;
	while(n!=0){
		if (n%10 > k){
			return 0;
		}
		k = n % 10;
		n = n / 10;		
	}
	if (t !=  Dem)
	{
		return 0;
	}else return 1;

}
void Incease(){
	int i;
	for (i = 100; i < 999; ++i)
	{
		if(Tang(i)) printf("%d   ",i);
	}
}
int main(int argc, char const *argv[])
{
	SumNT();
	printf("\n ========day khong giam============\n");
	Incease();
	printf("\n");
	printf("********** Code by TRUNGDAO **************************************\n");
	return 0;
}