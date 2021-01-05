#include<stdio.h>
int main(){
	int mm[4][2]={{0,1},{1,0},{0,-1},{-1,0}},i,j,k,h=1,n=0,m=0,a[5][5];
	for(i=5;i>0;i=i-2){
	
		for(j=0;j<4;j++){
			
			for(k=1;k<i;k++){
				a[n][m]=h;
				h++;
				n=n+mm[j][0];
				m=m+mm[j][1];
			}
		}
		n++;
		m++;
	}
	a[2][2]=2+23;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
