#include<stdio.h>
int dp[250];
int f(int x){
    if(x==1||x==2){
        return dp[x]=1;
    }
    if(dp[x]!=0){
        return dp[x];
    }
    return  dp[x]=(f(x-1)+f(x-2))%10009;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
}
