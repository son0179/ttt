#include<stdio.h>
int n,card[10000],dp[10000];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&card[i]);
    }
    dp[0]=card[0];
    for(int i=1;i<n;i++){
        int maax=-2100000000;
        for(int j=0;j<=i;j++){
            if(maax<dp[i-j-1]+card[j]){
                maax=dp[i-j-1]+card[j];
            }
        }
        dp[i]=maax;
    }
    printf("%d",dp[n-1]);
}
