#include<stdio.h>
int x,y;
char a[15][15];
void dfs(int i,int j){
    if(i<1||j<1||i>10||j>10) return;
    a[i][j]='*';
    if(a[i+1][j]=='_'){
        dfs(i+1,j);
    }
    if(a[i-1][j]=='_'){
        dfs(i-1,j);
    }
    if(a[i][j-1]=='_'){
        dfs(i,j-1);
    }
    if(a[i][j+1]=='_'){
        dfs(i,j+1);
    }
}
int main(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    scanf("%d %d",&x,&y);
    if(a[y+1][x+1]=='_') dfs(y+1,x+1);
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
}
