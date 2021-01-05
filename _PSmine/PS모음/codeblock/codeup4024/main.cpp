#include<stdio.h>
int v[120][120],s=0,w,h;
char a[120][120]={'0'};
void dfs(int i,int j){
    int c=0;
    v[i][j]=1;
    if(a[i][j+1]=='L'&&v[i][j+1]==0){
        dfs(i,j+1);
    }
    if(a[i][j-1]=='L'&&v[i][j-1]==0){
        dfs(i,j-1);
    }
    if(a[i+1][j+1]=='L'&&v[i+1][j+1]==0){
        dfs(i+1,j+1);
    }
    if(a[i+1][j]=='L'&&v[i+1][j]==0){
        dfs(i+1,j);
    }
    if(a[i-1][j]=='L'&&v[i-1][j]==0){
        dfs(i-1,j);
    }
    if(a[i-1][j-1]=='L'&&v[i-1][j-1]==0){
        dfs(i-1,j-1);
    }
    if(a[i-1][j+1]=='L'&&v[i-1][j+1]==0){
        dfs(i-1,j+1);
    }
    if(a[i+1][j-1]=='L'&&v[i+1][j-1]==0){
        dfs(i+1,j-1);
    }
}
int main(){
    scanf("%d %d",&w,&h);
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if(v[i][j]==0&&a[i][j]=='L'){
                s++;
                dfs(i,j);
            }
        }
    }
    printf("%d",s);
}
