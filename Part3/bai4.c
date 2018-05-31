#include<stdio.h>
int i,k;
int TN(int i){
	int k=0;
	int n = i;
	while(n> 0 ){
		k = k*10 + n%10;
		n = n/10;
	}
	if (k != i)
	{
		return 0;
	}
	return 1;
}
int chiahetcho10(int n){
	k = 0;
	while(n!=0){
		k = k+ n%10;
		n /= 10;
	}
	if (k%10 != 0)
	{
		return 0; 
	}
	return 1;
}
void ThuanNghich(){
	for (i = 100000; i <999999 ; ++i)
	{
		if(TN(i)){
			if (chiahetcho10(i))
			{
			printf("%d  ",i);
				
			}
			}
	}
}
int main(int argc, char const *argv[])
{
	ThuanNghich();
	return 0;
}