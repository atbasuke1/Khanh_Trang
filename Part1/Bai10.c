#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{	
	int a,b,c;
	printf("****Kiem Tra canh cua 1 tam giac*****\n");	
	printf("Nhap 3 so a,b,c: \n");
	scanf("%d %d %d",&a,&b,&c);
	 while (a<0||b<0||c<0)
	{
		printf("--Ngu vl--\n--Nhap lai di-- \n");
		printf("Nhap 3 so a,b,c: \n");
		scanf("%d %d %d",&a,&b,&c);

	};
	printf("--Gioi ^^--\n");
	if ((a+b)>c && (a+c)>b &&(b+c)>a)
	{
		printf("OK! da nhap dung 3 canh cua 1 tam giac\n");
		if (a*a+b*b == c*c || a*a+c*c == b*b||c*c+b*b == a*a)
		{	
			if( a==b ||a == c||b==c) printf("Va day la 1 tam giac vuong can\n");
			else printf("Va day la 1 tam giac vuong\n");
		}
		if (a==b &&a == c && b==c)
		{
			printf("Va day la 1 tam giac deu\n");
		}
		if(a==b &&a == c||a== c && b==c||a== b && b==c){
			printf("va Day la tam giac can\n");
		}		
	}else printf(" Cơ mà m nhap cai eo j v \n");

	printf("\n");
	printf("**********Make by TRUNGDAO*************************************************\n");
	return 0;
}