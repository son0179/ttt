#include<stdio.h>
int main(){
    int n,dp[200000];
    scanf("%d",&n);
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        dp[i]%=1000;
    }
    printf("%d",dp[n]);



}
