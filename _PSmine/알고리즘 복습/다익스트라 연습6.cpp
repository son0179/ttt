#include<stdio.h>
#include<algorithm>
#define MAX 2100000000
using namespace std;
int s[9][9],d[9],n,cnt,ch[9],st,ed;
pair <int,int> q[10];
int main(){
	n=8;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			s[i][j]=MAX;
		}
	}
	s[1][2]=1;
	s[1][4]=2;
	s[1][3]=7;
	s[2][5]=2;
	s[2][6]=4;
	s[3][6]=2;
	s[3][7]=3;
	s[4][7]=5;
	s[5][6]=1;
	s[6][8]=6;
	s[7][8]=5; 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			s[j][i]=s[i][j];
		}
	}
	for(int i=1;i<9;i++){
		d[i]=MAX;
	}
	d[1]=0;
	cnt=1;
	ch[1]=1; 
	for(int i=1;i<=n;i++){  
		for(int j=1;j<=n;j++){
			if(ch[j]==0&&s[cnt][j]!=MAX){
				d[j]=min(d[j],d[cnt]+s[cnt][j]);
				q[ed].first=d[j];
				q[ed].second=j;
				ed++;
			}
		}
		sort(q+st,q+ed);
		cnt=q[st].second;
		ch[cnt]=1;
		st++;
	}
	for(int i=1;i<=n;i++){
		printf("%d ",d[i]);
	}
}

