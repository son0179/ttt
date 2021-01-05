#include<stdio.h>
#include<algorithm>
#include<queue>
#define INF 210000000
using namespace std;
queue <int> q;
int n,m,s,e,money,a[1100][1100],dist[1100];
int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=INF;
        }
    }
    for(int i=0;i<m;i++){
        scanf("%d %d %d",&s,&e,&money);
        a[s][e]=min(a[s][e], money);
    }
    for(int i=1;i<=n;i++){
        dist[i]=INF;
    }
    scanf("%d %d",&s,&e);
    q.push(s);
    dist[s]=0;
    while(!q.empty()){
        for(int i=1;i<=n;i++){
            if(a[q.front()][i]!=INF&&a[q.front()][i]+dist[q.front()]<dist[i]){
                dist[i]=a[q.front()][i]+dist[q.front()];
                q.push(i);
            }
        }
        q.pop();
    }
    printf("%d",dist[e]);
}
