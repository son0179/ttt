#include<stdio.h>
#include<algorithm>
using namespace std;
int m,a[3][100],dp[100][5];
int f(int x,int y){
	if(dp[x][y]!=0){
		return dp[x][y];
	}
	else{
		if(y==1){
			return dp[x][y]=a[1][x]+max(f(x-1,2),f(x-1,3));
		}
		else if(y==2){
			return dp[x][y]=a[2][x]+max(f(x-1,1),max(f(x-1,3),f(x-1,4)));
		}
		else if(y==3){
			return dp[x][y]=a[3][x]+max(f(x-1,1),f(x-1,2));
		}
		else{
			return dp[x][y]=a[1][x]+a[3][x]+f(x-1,2);
		}
	}
}
int main(){
	scanf("%d",&m);
	for(int i=1;i<=3;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	dp[1][1]=a[1][1];
	dp[1][2]=a[2][1];
	dp[1][3]=a[3][1];
	dp[1][4]=a[1][1]+a[3][1];
	printf("%d",max(max(f(m,1),f(m,2)),max(f(m,3),f(m,4))));
}
