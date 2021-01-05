#include<stdio.h>
int main(){
	int i,r,n=1,a[5][5]={0};
	for(n=0;n<25;n++){
		a[0][n]=n+1;
	}
	for(r=0;r<=4;r++){
		printf("\n");                           
		for(i=0;i<=4;i++){
			printf("%d ",a[r][i]);
		}
	}
}      
