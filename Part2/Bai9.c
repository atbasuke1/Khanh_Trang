#include <stdio.h>
#include <math.h>
int n,a[100],i,j;
int Doixung(int a[]){
	for ( i = 0; i < n; ++i)
	{
		if(n%2==0) return 0;
		 else{
			for (j= n-1; j >=i ; j--)
			{
				if (a[i] != a[j])
				{
					return 0;
				}else return 1;
			}
		}
	 }
	return 1;
}
int main(int argc, char const *argv[])
{
	
	printf("nhap n:  \n");
	scanf("%d",&n);
	for ( i = 0; i < n; ++i)
	{
		do
		{
			printf("nhap a[%d]:  ",i);
			scanf("%d",&a[i]);
		} while (a[i]<0);
	}
	printf("\n");
	if (Doixung(a))
	{
		printf("++Day Doi Xung\n");
	}
	else{
		printf("+ Not Doi xung\n");
	}
	printf("\n");
	printf("********** Make by TRUNGDAO *************************************************\n");
	return 0;

}