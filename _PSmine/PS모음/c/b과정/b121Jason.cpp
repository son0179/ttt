#include<stdio.h>
char a[1024]={0};
int f(int n,int e){
	if(n==0){
		for(int d=e;d>0;d--){
			printf("%c",a[d]);
			
		
		}
		printf("\n");	
	}
	else{
		a[n]='0';
		f(n-1,e);
		a[n]='1';
		f(n-1,e);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	f(n,n);
}
