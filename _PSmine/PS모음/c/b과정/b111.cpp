#include<stdio.h>
long long f(int n){
	if(n<=2){
		return n;
	}
	else{
		return f(n-1)+f(n-2);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%lld",f(n));
}
