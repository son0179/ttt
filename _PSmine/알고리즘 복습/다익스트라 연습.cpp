#include<stdio.h>
#include<algorithm>
using namespace std;
int n,w[10][10];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&w[i][j]);
			if(w[i][j]==0){
				w[i][j]=100;
			}
		}
	}
	printf("\n");
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				w[i][j]=min(w[i][j],w[i][k]+w[k][j]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d ",w[i][j]);
		}
		printf("\n");
	}
}
/*
0 1 3 0 0
1 0 3 6 0
3 3 0 4 2 
0 6 4 0 5
0 0 2 5 0
*/
