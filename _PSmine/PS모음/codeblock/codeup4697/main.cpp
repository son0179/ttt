#include<stdio.h>
int n,m[105][105],v[105][105],maax=-2100000000,maaax=-2100000000;
int d[105][105]={0};
void dfs(int i,int j){
    v[i][j]=1;
    if(d[i][j+1]==1&&v[i][j+1]==0){
        dfs(i,j+1);
    }
    if(d[i][j-1]==1&&v[i][j-1]==0){
        dfs(i,j-1);
    }
    if(d[i-1][j]==1&&v[i-1][j]==0){
        dfs(i-1,j);
    }
    if(d[i+1][j]==1&&v[i+1][j]==0){
        dfs(i+1,j);
    }
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&m[i][j]);
            if(maax<m[i][j]){
                maax=m[i][j];
            }
        }
    }
    for(int k=0;k<=maax;k++){
        for(int i=0;i<n+5;i++){
            for(int j=0;j<n+5;j++){
                d[i][j]=0;
                v[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(m[i][j]>k){
                    d[i][j]=1;
                }
            }
        }
        int s=0;
       for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(d[i][j]==1&&v[i][j]==0){
                    s++;
                    dfs(i,j);

                }
            }
        }
        if(s>maaax){
            maaax=s;
        }
    }
    printf("%d",maaax);
}
