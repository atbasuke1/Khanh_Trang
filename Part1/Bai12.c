#include <stdio.h>
int main(int argc, char const *argv[])
{	
	int m,i,n;
	printf("*******Tong cac so tu nhien n*****\n");
	scanf("%d",&n);
	m=0;
	for (i = 0; i <= n; ++i)
	{
		m = m+i;
	}
	printf("%d\n",m);
	return 0;
}