#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float a,b,c,delta,d,e,phuc;
int main()
{	
	
	printf("Giai Phuong Trinh Bac 2!\n");
	printf("***********************************\n");	
	printf("	Phuong Trinh co dang : a*x*x + b*x + c =0 \n");
	printf("	Nhap a,b,c  :  ");
	scanf("%f %f %f",&a,&b,&c);
	delta = b*b - 4*a*c;
	if (a==0)
	{
		if(b==0){
			if (c==0)
			{
				printf("\t+ Phuong Trinh co vo so nghiem!!!!\n");
			}
			else printf("\t+ Phuong Trinh Vo nghiem!!!!!\n");
		}
		else{
			printf("\t+ Phuong Trinh co 1 nghiem x=%f\n",-c/b);
		}
	}
	else{
		if(delta < 0){
			phuc=(sqrt(abs(delta)))/(2*a);
	printf("\t+ Phuong Trinh co 2 nghiem:\n\t\t\t\t x1=%5.0f - %fi\n",-b/(2*a),phuc);
	printf(" \n\t\t\t\t x2 =%5.0f + %fi \n",-b/(2*a),phuc);


		}
		if(delta == 0) printf("\t+ Phuong Trinh co 1 nghiem kep x=%f \n",-c/2*a);
		if (delta >0)
		{	
			d=(-b-sqrt(delta))/(2*a);
			e=(-b+sqrt(delta))/(2*a);
		printf("\t+ Phuong Trinh co 2 nghiem:\n\t\t\t\t x1=%f \n\t\t\t\t x2 = %f \n",d,e);
		}
	}
	printf("\n");
	printf("**********Make by TRUNGDAO*************************************************\n");
	return 0;
}