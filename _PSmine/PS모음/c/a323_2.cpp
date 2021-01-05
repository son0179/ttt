#include<stdio.h>
int main(){
	int m=0,t=1,i,j,k,a[5][5]={0},n=0;
	for (k=1;k<22;k=k+n){
		n=n+2;
		a[m][m]=k;
		for(i=1;i<=m;i++){
			a[m-i][m]=k+t*i;
			a[m][m-i]=k-t*i;
		}
		
		m++;
		t=t*-1;
		
	}
	for(i=0;i<5;i++){
		printf("\n");
		for(j=0;j<5;j++){
			printf("%3d",a[i][j]);
		}
	}
	
}
