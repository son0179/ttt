#include<stdio.h>
int n,m,a[100][100],v[100][100],c;
void dfs(int i,int j){
    v[i][j]=0;
    if(a[i+1][j]==1&&v[i+1][j]==1){
        dfs(i+1,j);
    }
    if(a[i][j+1]==1&&v[i][j+1]==1){
        dfs(i,j+1);
    }
    if(a[i+1][j+1]==1&&v[i+1][j+1]==1){
        dfs(i+1,j+1);
    }
    if(a[i-1][j]==1&&v[i-1][j]==1){
        dfs(i-1,j);
    }
    if(a[i][j-1]==1&&v[i][j-1]==1){
        dfs(i,j-1);
    }
    if(a[i-1][j-1]==1&&v[i-1][j-1]==1){
        dfs(i-1,j-1);
    }
    if(a[i+1][j-1]==1&&v[i+1][j-1]==1){
        dfs(i+1,j-1);
    }
    if(a[i-1][j+1]==1&&v[i-1][j+1]==1){
        dfs(i-1,j+1);
    }
    return;
}
int main(){
    while(1){
        scanf("%d %d",&m,&n);
        if(n==0&&m==0){
            break;
        }
        else{
            for(int i=1;i<=50;i++){
                for(int j=1;j<=50;j++){
                    v[i][j]=1;
                    a[i][j]=0;
                }
            }
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    scanf("%d",&a[i][j]);
                }
            }
            c=0;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    if(a[i][j]==1&&v[i][j]==1){
                        c++;
                        dfs(i,j);
                    }
                }
            }
            printf("%d\n",c);
        }
    }
}
