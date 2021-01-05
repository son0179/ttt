#include<stdio.h>
char a[100]={0};
int f(int n,int m){
	if(n==0){
		printf("%s",a);
		printf("\n");
	}
	else{
		a[m]='0';
		f(n-1,m+1);
		a[m]='1';
		f(n-1,m+1);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	f(n,0);
}
