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
pair <int, pair < int, int> > b[100];
int ch[10],cnt,s,x,a[10][10];
int main(){
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=1;j<=x;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<x;i++){
		for(int j=i+1;j<=x;j++){
			if(a[i][j]!=0){
				cnt++;
				b[cnt].first=a[i][j];
				b[cnt].second.second=j;
				b[cnt].second.first=i;
			}
		}
	}
	int c=1;
	sort(b+1,b+cnt+1);
	ch[b[1].second.first]=ch[b[1].second.second]=c;
	s+=b[1].first;
	b[1].first=10000;
	for(int i=1;i<x-1;i++){
		while(1){
			sort(b+1,b+cnt+1);
			if(ch[b[1].second.first]==0&&ch[b[1].second.second]==0){
				c++;
				ch[b[1].second.first]=ch[b[1].second.second]=c;
				s+=b[1].first;
				b[1].first=10000;
				break;
			}
			else if(ch[b[1].second.first]==ch[b[1].second.second]){
				b[1].first=10000;
			}	
			else{
				for(int j=1;j<=x;j++){
					if(ch[j]==ch[b[1].second.second]){
						ch[j]=ch[b[1].second.first];
					}
				}
				s+=b[1].first;
				b[1].first=10000;
				break;
			}	
		}
	}
	printf("%d",s);
}
