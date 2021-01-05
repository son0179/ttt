#include<stdio.h>
int main(){
	int a[5][5]={0},i,j,n=1;
	for(i=0;i<5;i++){
		printf("\n");
		for(j=0;j<=i;j++){
			a[i][j]=n;
			printf("%d ",a[i][j]);
			n=n+1;
		}
	}
}
