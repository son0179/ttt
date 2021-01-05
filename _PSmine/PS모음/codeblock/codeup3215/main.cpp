//dijkstra
#include<stdio.h>
#include<algorithm>
#include<queue>
using namespace std;
queue <int> q;
int n,m,d[30][30],dist[30],v[30];
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        dist[i]=2100000000;
    }
    for(int i=1;i<=m;i++){
        char a,b;
        int c;
        scanf(" %c %c %d",&a,&b,&c);
        d[a-'A'+1][b-'A'+1]=d[b-'A'+1][a-'A'+1]=c;
    }
    char s,e;
    scanf(" %c %c",&s,&e);
    int x=s-'A'+1,y=e-'A'+1;
    q.push(x);
    v[x]=1;
    dist[x]=0;
    while(!q.empty()){
        for(int i=1;i<=n;i++){
            if(d[q.front()][i]!=0&&dist[q.front()]+d[q.front()][i]<dist[i]){
                dist[i]=dist[q.front()]+d[q.front()][i];
                q.push(i);
            }
        }
        q.pop();
    }
    if(dist[y]==2100000000){
        printf("-1");
    }
    else{
        printf("%d",dist[y]);
    }
}
