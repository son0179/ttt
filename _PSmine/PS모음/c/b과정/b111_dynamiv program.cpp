#include<stdio.h>
int c[10000]={0};
long long v[10000]={0};
long long f(int n){
	if(c[n]==0){
		c[n]=1;
		if(n<=2){
			v[n]=n;
		}
		else{
			v[n]=f(n-1)+f(n-2);
		}
	}
	return v[n];
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%lld",f(n));
}
