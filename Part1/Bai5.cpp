#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,d,max;
	printf(" nhap 4 so a,b,c,d : ");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	 
	if((a==b)&&(a==c)&&(a==d)){
		printf("khong co so lon nhat");
	}else{
	if(a>b){		
		if(a>c){
			if(a>d){
				max=a;
			}
			else max =d;
		}else{
		 if(c>d){
			max=c;
		}else max =d;
		
	}
		
	}else{
		if(b>c){
			if(b>d) max =b;
			else max =d;
		}else{
			if(c>d) max =c;
			else max =d;
		}
	}
	printf("%f", max);
}
	

}
