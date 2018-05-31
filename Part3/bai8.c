#include <stdio.h>
#include <math.h>
int a[100][100];
int j,i,m,n,k,X;
void swap(int *a, int *b){
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
void hienthi(){
		printf("\n");
		for(i=0;i<m;i++)
		{
        	for(j=0;j<n;j++)
            	printf("%d\t",a[i][j]);
        printf("\n");
    }

}
int main(int argc, char const *argv[])
{	

	printf("nhap m,n :  ");
	scanf("%d %d",&m,&n);
	for (i = 0; i < m; ++i)
		for(j = 0; j< n; j++){
			do{
				printf("nhap a[%d][[%d] \n",i,j);
				scanf("%d",&a[i][j]);
			}while(a[i][j] >100 || a[i][j] < 0);
		};
	printf("Nhap X = ");
	scanf("%d",&X);
	for(i = X;i<m-1 ; i++){
		for(j = 0; j<n;j++){
			a[i][j] = a[i+1][j];
		}
	 m--;
	}
	hienthi();
	printf("\n");
	printf("********** Code by TRUNGDAO **************************************\n");

	return 0;
}