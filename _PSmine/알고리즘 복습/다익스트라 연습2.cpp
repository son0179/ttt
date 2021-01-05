#include<stdio.h>
#include<algorithm>
using namespace std;
int n,w[10][10],a[10][10],x,y;
void path(int s,int e){
	if(a[s][e]!=0){
		path(s,a[s][e]);
		printf("%d ",a[s][e]);
		path(a[s][e],s);
	}
}
int main(){
	scanf("%d %d",&x,&y);
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
				if(min(w[i][j],w[i][k]+w[k][j])==w[i][k]+w[k][j]){
					a[i][j]=k;
				}
				min(w[i][j],w[i][k]+w[k][j]);
			}
		}
	}
	path(x,y);
}
/*
0 1 3 0 0
1 0 3 6 0
3 3 0 4 2 
0 6 4 0 5
0 0 2 5 0
*/
