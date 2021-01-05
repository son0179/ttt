#include<stdio.h>
#include<algorithm>
using namespace std;
int n,a[10000],dp[10000],x;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        dp[i]=1;
    }

    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(a[i]>a[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
        x=max(x,dp[i]);
    }
    printf("%d",x);
}
