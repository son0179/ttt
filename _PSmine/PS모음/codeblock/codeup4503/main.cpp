#include<stdio.h>
#include<queue>
using namespace std;
queue <int> q;
int x,y,z[110][110],v[110];
int main(){
    scanf("%d%d",&x,&y);
    for(int i=0;i<y;i++){
        int m,n;
        scanf("%d %d",&m,&n);
        z[m][n]=1;
        z[n][m]=1;
    }
    q.push(1);
    v[1]=1;
    while(!q.empty()){
        for(int i=1;i<=x;i++){
            if(z[q.front()][i]==1&&v[i]==0){
                q.push(i);
                v[i]=1;
            }
        }
        q.pop();
    }
    int c=0;
    for(int i=1;i<=x;i++){
        if(v[i]==1){
            c++;
        }
    }
    printf("%d",c-1);
}
