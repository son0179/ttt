#include<stdio.h>
int v[100][100]={0};
int c[100][100]={0};
int f(int n, int r){
	if (c[n][r]==0){
		if(r==0||n==r){
			v[n][r]=1;	
		}
		else{
			v[n][r]=f(n-1,r-1)+f(n-1,r);
		}
	}
	return v[n][r];
	
}
int main(){
	int n,r;
	scanf("%d%d",&n,&r);
	printf("%d",f(n,r));
}
