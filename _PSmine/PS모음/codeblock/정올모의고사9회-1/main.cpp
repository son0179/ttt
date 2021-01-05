#include<stdio.h>
int n,dp[10000];
int main(){
    scanf("%d",&n);
    dp[0]=1;
    dp[1]=3;
    for(int i=2;i<n;i++){
        dp[i]=dp[i-1]+2*dp[i-2];
        dp[i]%=10007;
    }
    printf("%d",dp[n-1]);
}
