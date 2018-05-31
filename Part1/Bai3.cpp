#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	printf(" nhap 2 so a,b \n");
	scanf("%d %d",&a,&b);
	int c = a-b;	
	if(c>0){
		printf("%d > %d",a,b);
	}
	if(c<0){
		printf("%d < %d",a,b);
	}
	if(c==0){
		printf("%d = %d",a,b);
	}
}
