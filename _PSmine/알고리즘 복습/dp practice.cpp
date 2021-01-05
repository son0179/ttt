#include<stdio.h>
#include<algorithm>
using namespace std;
int a[50][50],n,m,dp[50][50];
int main(){
	for(int i=0;i<50;i++){
		for(int j=0;j<50;j++){
			dp[i][j]=2100000000;
		}
	}
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
			dp[i][j]=a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i!=1||j!=1){
				dp[i][j]+=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
			}
		}
	}
	printf("%d",dp[n][m]);
}
