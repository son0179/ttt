#include<stdio.h>
int a[10][10],v[10][10],c=0,f=0;
void dfs(int i,int j){
    v[i][j]=1;
    c++;
    if(a[i][j-1]==a[i][j]&&v[i][j-1]==0){
        dfs(i,j-1);
    }
    if(a[i][j+1]==a[i][j]&&v[i][j+1]==0){
        dfs(i,j+1);
    }
    if(a[1+i][j]==a[i][j]&&v[i+1][j]==0){
        dfs(i+1,j);
    }
    if(a[i-1][j]==a[i][j]&&v[i-1][j]==0){
        dfs(i-1,j);
    }

}
int main(){
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            c=0;
            if(v[i][j]==0) dfs(i,j);
            if(c>2){
                f++;
            }
        }
    }
    printf("%d",f);
}
