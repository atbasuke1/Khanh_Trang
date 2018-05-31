#include <stdio.h>
int i,j,m,n,l;
int a[100][100], b[100][100], c[100][100] = {0};
void in(int d[][100],int x,int y){
	for (i = 0; i < x; ++i)
	{
		for (j = 0; j < y; ++j)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}	
}
void Chuyenvi(){
	for (i = 0; i < m; ++i)
		for (j = 0; j < n; ++j)
			b[j][i] = a[i][j];
		
	
}
void Tich2matran(){
	for ( i = 0; i < m; ++i)
		for (j = 0; j < m; ++j)
			for ( l = 0; l < n; ++l)	
				c[i][j] += a[i][l]*b[l][j];
			
}
void nhap(){
	printf("nhap m,n\n");
	scanf("%d %d",&m,&n);
	for (i = 0; i < m; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			printf("nhap a[%d][%d] \n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
int main(int argc, char const *argv[])
{	
	nhap();
	Chuyenvi();
	printf("Ma Tran A\n");
	in(a,m,n);
	printf("Ma Tran B\n");
	in(b,n,m);
	printf("tich 2 ma Tran: \n");
	Tich2matran();
	in(c,m,m);
	return 0;
}	