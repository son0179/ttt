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
int ch[10],cnt,s,cnt2,cnt3,a[10][10],x,b[10];
int main(){
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=1;j<=x;j++)
		scanf("%d",&a[i][j]);
	}
	ch[1]=1;
	for(int i=1;i<x;i++){
		cnt=cnt2=cnt3=2100000000;
		for(int j=1;j<=x;j++){
			if(ch[j]==1){
				for(int k=1;k<=x;k++){
					if(a[j][k]!=0&&ch[k]!=1){
						if(cnt!=min(cnt,a[j][k])){
							cnt=min(cnt,a[j][k]);
							cnt2=j;
							cnt3=k;
						}
					}
				}
			}
		}
		s+=cnt;
		printf("%d에서 %d까지 %d소모\n",cnt2,cnt3,cnt);
		ch[cnt3]=1;
	}
	printf("\n총비용은 %d",s);
}
