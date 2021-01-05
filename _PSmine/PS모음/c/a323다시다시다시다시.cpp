#include<stdio.h>
int main(){
	int a[5][5],i,j,n,m=2,k=1,h,sign1=-1;
	for(n=0;n<5;n=n+1){
		a[n][n]=k;
		for(h=1;h<=n;h++){
			a[n-h][n]=k-h*sign1;
			a[n][n-h]=k+h*sign1;
		}
		k=k+m;
		m=m+2;
		sign1=sign1*(-1);
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
