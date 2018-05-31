#include<stdio.h>
#include<math.h>
void nhap(int a[][50],int &n,int &m)
{
 printf("nhap so dong:"); scanf("%d",&n);
 printf("nhap so cot:"); scanf("%d",&m);
 for(int i=0;i<n;i++)
 for(int j=0;j<m;j++){
 do{
 	printf("nhap pt thu [%d][%d]: ",i,j);
 	scanf("%d",&a[i][j]);
 } while(a[i][j] < 0 || a[i][j]>100);
 }
}
void xuat(int a[][50],int n,int m)
{
 for(int i=0;i<n;i++)
 {
 for(int j=0;j<m;j++)
 {
 printf("%4d",a[i][j]);
 
 }
 printf("\n");
 } 
}  
void XoaCot(int a[][50],int n, int &m)
{
 int x;
  printf("nhap x:"); scanf("%d",&x);
 for(int i=0;i<n;i++)
 for(int j=x;j<m-1;j++)
 {
 a[i][j]=a[i][j+1];
 }
 m--;
 xuat(a,n,m); 
}
int main()
{
 int a[50][50],n,m,x;
 nhap(a,n,m);
 xuat(a,n,m);
 XoaCot(a,n,m);

 return 0; 

}
