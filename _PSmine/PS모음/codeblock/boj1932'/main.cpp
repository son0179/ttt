#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m[501][501],dp[501][501],a[501];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            scanf("%d",&m[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            dp[i][j]=m[i][j]+max(dp[i-1][j],dp[i-1][j-1]);
        }
    }
    for(int i=1;i<=n;i++){
        a[i]=dp[n][i];
    }
    sort(a+1,a+n+1);
    printf("%d",a[n]);
}
