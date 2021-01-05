#include<stdio.h>
int main(){
	int a[5][5]={0},i,j,p=1,n=0,m=0,mm[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	for(i=5;i>0;i=i-2){
		for(j=0;j<4;j++){
			for(int k=1;k<=i-1;k++){
				a[m][n]=p;
				m=m+mm[j][0];
				n=n+mm[j][1];
				
			}
		}
	}
	for(i=0 ; i<=4 ; i++){
		for(j=0 ; j<=4 ; j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
