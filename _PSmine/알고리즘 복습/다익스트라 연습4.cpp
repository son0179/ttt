#include<stdio.h>
#include<algorithm>
using namespace std;
/*
0 1 3 0 0
1 0 3 6 0
3 3 0 4 2 
0 6 4 0 5
0 0 2 5 0
*/
int ch[10],cnt,a[10][10],s,x,b[10];
int main(){
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=1;j<=x;j++)
		scanf("%d",&a[i][j]);
	}
	for(int i=0;i<10;i++){
		b[i]=2100000000;
	}
	ch[1]=1;
	cnt=1;
	for(int i=1;i<x;i++){
		for(int j=1;j<=x;j++){
			if(a[cnt][j]!=0&&ch[j]==0){
				b[j]=min(b[j],a[cnt][j]);
			}
		}
		int mini=2100000000;
		for(int j=1;j<=x;j++){
			printf("%d ",b[j]);
			if(b[j]<mini&&ch[j]==0){
				cnt=j;
				mini=b[j];
			}
		}
		printf("\n");
		ch[cnt]=1;
		s+=mini;
	}
	printf("\n최소비용은 %d",s);
}
