#include<stdio.h>
int main(){
    int n,dp[200000];
    scanf("%d",&n);
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
        dp[i]%=10007;
    }
    printf("%d",dp[n]);
}
