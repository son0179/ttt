#include<stdio.h>
int main(){
	int i,r,n=1,a[5][5]={0};
	for(r=0;r<=4;r++){
		for(i=0;i<=4;i++){
			a[r][i]=n;
			n=n+1;
			printf("%d ",a[r][i]);
		}	
		printf("\n");  
	}
}      
