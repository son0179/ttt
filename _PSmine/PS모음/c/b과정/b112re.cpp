#include<stdio.h>
int f(int n){
	if(n>1){
		return n*f(n-1);
	}
	else{
		return n;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
}
