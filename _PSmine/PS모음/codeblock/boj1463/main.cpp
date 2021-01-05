#include<stdio.h>
#include<algorithm>
using namespace std;
int n,dp[1200000];
int main(){
    scanf("%d",&n);
    dp[1]=0;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+1;
        if(i%3==0){
            dp[i]=min(dp[i],dp[i/3]+1);
        }
        if(i%2==0){
            dp[i]=min(dp[i],dp[i/2]+1);
        }
    }
    printf("%d",dp[n]);
}
