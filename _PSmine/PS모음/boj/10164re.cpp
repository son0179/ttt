#include<stdio.h>
int main() {
	int x,y,n,m,k,road[15][15]= {0};
	scanf("%d %d %d",&x,&y,&k);
	if(k==0) {
		for(int i=0; i<x; i++) {
			road[i][0]=1;
		}
		for(int i=0; i<y; i++) {
			road[0][i]=1;
		}
		for(int i=1; i<x; i++) {
			for(int j=1; j<y; j++) {
				road[i][j]=road[i-1][j]+road[i][j-1];
			}
		}
		printf("%d",road[x-1][y-1]);
	} else {
		m=(k-1)/y;
		n=(k-1)%y;
		for(int i=1; i<=m; i++) {
			road[i][0]=1;
		}
		for(int i=1; i<=n; i++) {
			road[0][i]=1;
		}
		for(int i=1; i<=m; i++) {
			for(int j=1; j<=n; j++) {
				road[i][j]=road[i-1][j]+road[i][j-1];
			}
		}
		for(int i=m+1; i<x; i++) {
			road[i][n]=1;
		}
		for(int i=n+1; i<y; i++) {
			road[m][i]=1;
		}
		for(int i=m+1; i<x; i++) {
			for(int j=n+1; j<y; j++) {
				road[i][j]=road[i-1][j]+road[i][j-1];
			}
		}
		printf("%d",road[m][n]*road[x-1][y-1]);
	}
}
