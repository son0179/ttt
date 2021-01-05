#include<stdio.h>
int v[100][100],t,m,n,a[100][100],k,x,y,o;
void dfs(int i,int j){
    v[i][j]=0;
    a[i][j]=0;
    if(a[i+1][j]==1&&v[i+1][j]==1){
        dfs(i+1,j);
    }
    if(a[i][j+1]==1&&v[i][j+1]==1){
        dfs(i,j+1);
    }
    if(a[i][j-1]==1&&v[i][j-1]==1){
        dfs(i,j-1);
    }
    if(a[i-1][j]==1&&v[i-1][j]==1){
        dfs(i-1,j);
    }
}
int main(){
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        o=0;
        for(int j=1;j<=n;j++){
            for(int l=1;l<=m;l++){
                v[j][l]=0;
            }
        }
        scanf("%d %d %d",&n,&m,&k);
        for(int j=0;j<k;j++){
            scanf("%d %d",&x,&y);
            a[x+1][y+1]=1;
        }
        for(int j=1;j<=n;j++){
            for(int l=1;l<=m;l++){
                v[j][l]=1;
            }
        }
        for(int j=1;j<=n;j++){
            for(int l=1;l<=m;l++){
                if(a[j][l]==1&&v[j][l]==1){
                    o++;
                    dfs(j,l);
                }
            }
        }
        printf("%d\n",o);
    }
}
