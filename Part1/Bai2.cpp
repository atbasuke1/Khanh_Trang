#include<stdio.h>
int main(){
	int n;
	printf("nhap n ");
	scanf("%d",&n);
	if(n==0) printf("%d la mot so dac biet" ,n);
	else{
		if(n<0) printf(" %d la so am ", n);
		if(n>0) printf("%d la so duong ",n);
		if(n/2==0) printf("   va la so chan \n");
		if(n/2!=0) printf(" va la so le \n");
	}
	printf("\n");
	printf("*****Make by TRUNGDAO********\n");
	
}
