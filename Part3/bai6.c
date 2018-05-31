#include <stdio.h>
#include <math.h>
int i,j,n,m;
int a[100][100];
void nhap(int d[100][100],int x, int y){
	printf("nhap m,n: ");
	scanf("%d %d",&m ,&n );
	for(i = 0;i < m; i++){
		for(j = 0; j < n ; j++){
			printf("nhap a[%d][%d] :  ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
int SNT(int n){
	int i;
	if (n<2) return 0;
	else{
		for (i= 2; i<=sqrt(n); ++i)
		{
			if(n%i == 0) return 0;
		}
	}
	return 1;
}
void tinh(){
	int b;
	for(i = 0; i < m; i++){
		for (j = 0; j <n; ++j)
		{	
			if(SNT(a[i][j])) printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main(int argc, char const *argv[])
{
	nhap(a,m,n);
	tinh();
	return 0;
}