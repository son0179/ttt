#include<stdio.h>
int main(){
	int i,j,tick=1,n,a[5][5]={0};
	for(n=0;n<5;n++){
		a[n][n]=n*n+n+1;
		for(i=1;i<=n;i++){
			a[n-i][n]=n*n+n+1+i*tick;
			a[n][n-i]=n*n+n+1-i*tick;
		}
		tick=tick*-1;
	}
	for(i=0;i<5;i++){
		printf("\n");
		for(j=0;j<5;j++){
			printf("%3d",a[i][j]);
		}
	}
}
