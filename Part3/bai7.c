#include <stdio.h>
#include <math.h>
int a[100][100];
int j,i,m,n,k;
void swap(int *a, int *b){
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
void hienthi(){
	for (i = 0; i < m; ++i)
		for(j = 0; j< n-1; j++){
			for(k=j+1; k<n ;k++){
				if (a[i][j] > a[i][k])
				{
					int tam = a[i][j];
					a[i][j] = a[i][k];
					a[i][k] = tam ;
				}
			}
			
		}
	for(i = 0; i< n ; i++)
		for(j = 0; j< m-1;j++)
			for(k= j+1 ; k < m; k++){
				if (a[j][i] > a[k][i])
				{
					int tam = a[j][i];
					a[j][i] = a[k][i];
					a[k][i] = tam ;
				}
			}
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
		}
	hienthi();
	printf("\n");
	printf("********** Code by TRUNGDAO **************************************\n");

	return 0;
}