#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int n,i;
	float C=0;
	printf("Nhap n: \n");
	scanf("%d",&n);
		printf("%1.3f\t",C);
	for (i = 0; i <n; ++i)
	{
		C=C+1/(float)(n-i);
		printf("1/%d\n",n-i);
	}
		printf("**tong = %f\t",C);


	return 0;
}