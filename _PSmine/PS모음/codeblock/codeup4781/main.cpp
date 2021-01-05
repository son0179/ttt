#include<stdio.h>
#include<algorithm>
#include<queue>
using namespace std;
queue <pair <int,int> > q;
int x[1010][1010],m,n;
int main(){
    int day=0,cnt=0,t=0,e=0;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&x[i][j]);
            if(x[i][j]==-1){
                e++;
            }
            if(x[i][j]==1){
                t++;
                q.push({i,j});
                cnt++;
            }
        }
    }
    while(!q.empty()){
        int i=q.front().first;
        int j=q.front().second;
        q.pop();
        cnt--;
        if(x[i][j+1]==0&&j<n){
            x[i][j+1]=1;
            q.push({i,j+1});
        }
        if(x[i][j-1]==0&&j>1){
            x[i][j-1]=1;
            q.push({i,j-1});
        }
        if(x[i+1][j]==0&&i<m){
            x[i+1][j]=1;
            q.push({i+1,j});
        }
        if(x[i-1][j]==0&&i>1){
            x[i-1][j]=1;
            q.push({i-1,j});
        }
        if(cnt==0){
            day++;
            cnt=q.size();
            t+=cnt;
        }
    }
    if(e+t==m*n){
        printf("%d",day-1);
    }
    else{
        printf("-1");
    }
}
