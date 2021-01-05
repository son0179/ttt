#include<stdio.h>
int main(){
	int i,j,n=1,a[5][5]={0};
	for(i=0;i<=4;i++){
		for(j=0;j<=i;j++){
			a[i][j]=n;
			n++;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
