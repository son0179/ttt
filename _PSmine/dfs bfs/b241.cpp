#include<stdio.h>
int main(){
	int a[9][9]={0},n,m;
	for(int i=0;i<9;i++){
		scanf("%d %d",&n,&m);
		a[m][n]=1;
		a[n][m]=1;
	}
	for(int i=1;i<9;i++){
		for(int j=1;j<9;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
