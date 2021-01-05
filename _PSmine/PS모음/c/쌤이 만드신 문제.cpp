#include<stdio.h>
unsigned long long dp[100][100];
unsigned long long f(int n,int k){
	if(k==1||n==0){
		return 1;
	}
	else if(n==1){
		return k;
	}
	else{
		if(dp[n][k]!=0){
			return dp[n][k];
		}
		else{
			unsigned long long s=0;
			for(int i=0;i<=n;i++){
				s+=dp[n-i][k-1]=f(n-i,k-1);
			}
			return s;
		}	
	}
}
int main(){
	int n,k;
	unsigned long long s=0;
	scanf("%d %d",&n,&k);
	printf("%llu",f(n,k+1)-f(n,k));
}
