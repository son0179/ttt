#include<stdio.h>
int main(){
	int a[100][100]={0},m,n,c,r;
	scanf("%d",&n);
	r=0,c=n/2;
	for(m=1;m<=n*n;m++){
		a[r][c]=m;
		if(m%n==0){
			r++;
		}
		else{
			r--;
			c++;
		}
		if(r==n){
			r=0;
		}
		if(r==-1){
			r=n-1;
		}
		if(c==n){
			c=0;
		}
	}
	
	
	for(r=0;r<=n-1;r=r+1){
		printf("\n");
		for(c=0;c<n;c++){
			printf("%02d ",a[r][c]);
		}
	}
}
