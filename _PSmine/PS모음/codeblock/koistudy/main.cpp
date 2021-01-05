#include<stdio.h>
#include<algorithm>
#include<queue>
using namespace std;
queue <int> q;
int d[1000][1000],dist[1000],n,m;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        dist[i]=2100000000;
    }
    for(int i=1;i<=m;i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        d[a][b]=c;
        d[b][a]=c;
    }
    q.push(1);
    dist[1]=0;
    while(!q.empty()){
        for(int i=1;i<=n;i++){
            if(d[q.front()][i]!=0&&dist[i]>dist[q.front()]+d[q.front()][i]){
                dist[i]=dist[q.front()]+d[q.front()][i];
                q.push(i);
            }
        }
        q.pop();
    }
    if(dist[n]==2100000000){
        printf("Impossible");
    }
    else{
        printf("%d",dist[n]);
    }
}
