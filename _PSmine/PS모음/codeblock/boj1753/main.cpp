#include<stdio.h>
#include<queue>
using namespace std;
queue <int> q;
int n,e,k,u,v,w,dist[30000],a[20001][20001];
int main(){
    scanf("%d %d %d",&n,&e,&k);
    for(int i=1;i<=e;i++){
        scanf("%d %d %d",&u,&v,&w);
        a[u][v]=w;
    }
    for(int i=1;i<=n;i++){
        dist[i]=2100000000;
    }
    dist[k]=0;
    q.push(k);
    while(!q.empty()){
        for(int i=1;i<=n;i++){
            if(a[q.front()][i]!=0&&a[q.front()][i]+dist[q.front()]<dist[i]){
                dist[i]=a[q.front()][i]+dist[q.front()];
                q.push(i);
            }
        }
        q.pop();
    }
    for(int i=1;i<=n;i++){
        if(i==k){
            printf("0");
        }
        else{
            if(dist[i]==2100000000){
                printf("INF");
            }
            else{
                printf("%d",dist[i]);
            }
        }
        printf("\n");
    }
}
