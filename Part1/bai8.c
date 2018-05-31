#include <stdio.h>
#include <math.h>
float a,b;
float c;
int main(int argc, char const *argv[])
{
	printf("Giai phuon trinh ax+b=0\n");
	
	printf("nhap a,b  \n");
	scanf("%f %f",&a,&b);
	c=-b/a;
	if (a==0)
	{	
		if(b==0) printf("+ phuong trinh co vo so nghiem!\n");
		else printf("+ phuong trinh vo nghiem!!! \n");/* code */
	}
	else{
		if (b==0)
		{
			printf("+ phuong trinh co 1 nghiem x=0 \n");
		}
		else printf("+ phuong trinh co 1 nghiem x= %5.2f \n",c);
	}
	printf("\n");
	printf("************Make by TRUNGDAO********************************************\n");

	return 0;
}