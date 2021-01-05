#include<stdio.h>
int main(){
	int i,j,n=1,a[5][5]={0};
	for(i=0;i<=4;i++){
		for(j=0;j<=i;j++){
			a[i-j][j]=n;
			n++;
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
