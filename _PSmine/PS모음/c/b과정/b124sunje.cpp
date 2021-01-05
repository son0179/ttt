#include<stdio.h>
int f(int n,int s,int e){
	if(n==1){
		printf("%d %d",s,e);
		printf("\n");
		
	}
	else{
		f(n-1,s,6-s-e);
		f(1,s,e);
		f(n-1,6-s-e,e);
		
	}
	
}
int main(){
	int n;
	scanf("%d",&n);
	f(n,1,2);
}
