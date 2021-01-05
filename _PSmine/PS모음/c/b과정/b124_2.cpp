#include<stdio.h>
unsigned long long dp[1000];
unsigned long long f(int n){
	if(dp[n]){
		return dp[n];
	}
	else{
		return dp[n]=f(n-1)+f(n-2);	
	}
}
int main(){
	int n;
	dp[1]=1;
	dp[2]=1;
	scanf("%d",&n);
	printf("%llu",f(n));
}
