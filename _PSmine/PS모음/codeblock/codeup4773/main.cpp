#include<stdio.h>
#include<algorithm>
#include<queue>
using namespace std;
queue  <pair <int,pair < int,int > > > q;
int x,y,z,to[102][102][102],day=0,cnt=0,t=0,e=0;
int main(){
    for(int k=0;k<=101;k++){
        for(int i=0;i<=101;i++){
            for(int j=0;j<=101;j++){
                to[i][j][k]=2100000000;
            }
        }
    }
    scanf("%d %d %d",&y,&x,&z);
    for(int k=1;k<=z;k++){
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                scanf("%d",&to[i][j][k]);
                if(to[i][j][k]==1){
                    t++;
                    cnt++;
                    q.push({i,{j,k}});
                }
                if(to[i][j][k]==-1){
                    e++;
                }
            }
        }
    }

    while(!q.empty()){
        int i=q.front().first;
        int j=q.front().second.first;
        int k=q.front().second.second;
        q.pop();
        cnt--;
      //  printf("%d %d %d %d\n",i,j,k,cnt);
        if(to[i-1][j][k]==0){
            q.push({i-1,{j,k}});
            to[i-1][j][k]=1;
        }
        if(to[i][j-1][k]==0){
            q.push({i,{j-1,k}});
            to[i][j-1][k]=1;
        }
        if(to[i][j][k-1]==0){
            q.push({i,{j,k-1}});
            to[i][j][k-1]=1;
        }
        if(to[i+1][j][k]==0){
            q.push({i+1,{j,k}});
            to[i+1][j][k]=1;
        }
        if(to[i][1+j][k]==0){
            q.push({i,{j+1,k}});
            to[i][j+1][k]=1;
        }
        if(to[i][j][k+1]==0){
            q.push({i,{j,1+k}});
            to[i][j][k+1]=1;
        }
        if(cnt==0){
            day++;
            cnt=q.size();
            t+=cnt;
        }
    }
    if(e+t==x*y*z){
        printf("%d",day-1);
    }
    else{
        printf("-1");
    }
}
