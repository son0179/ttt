#include<stdio.h>
#include<algorithm>
using namespace std;
int n,dp[1100000];
int f(int x){
	if(dp[x]!=0){
		return dp[x];
	}
	else{
		int a,b,c;
		a=b=c=2100000000;
		a=f(x-1)+1;
		if(x%2==0){
			b=f(x/2)+1;
		}
		if(x%3==0){
			c=f(x/3)+1;
		}
		return	dp[x]=min(a,min(b,c));
	}
}
int main(){
	scanf("%d",&n);
	dp[2]=dp[3]=1;
	printf("%d",f(n));
}
