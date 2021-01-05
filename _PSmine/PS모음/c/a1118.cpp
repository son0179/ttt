#include<stdio.h>
int main(){
	int a[6][7]={0},m,n,i,j;
	scanf("%d",&n);
	m=1-n;
	
	for(i=0;i<=6&&m<32;i++){
		for(j=0;j<7&&m<32;j++){
			a[i][j]=m;
			m++;
		}
	}
	
	for(i=0;i<n;i++){
		a[0][i]=0;
	}
	
	
	for(i=0;i<6;i++){
		printf("\n");
		for(j=0;j<7;j++){
			printf("%02d ",a[i][j]);
		}
	}
	
}
