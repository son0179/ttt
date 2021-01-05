#include<stdio.h>
int main(){
    int a[105][105]={0},n,m,b=0,x=1,y=1,o,k[4][2]={{1,0},{0,-1},{-1,0},{0,1}};
    scanf("%d %d",&n,&m);
    o=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            a[i][j]=-1;
        }
    }
    y=m;
    while(o<n*m){
        while(a[x+k[b%4][0]][y+k[b%4][1]]==-1&&o!=n*m){
            a[x][y]=o;
            x+=k[b%4][0];
            o++;
            y+=k[b%4][1];
        }
        b++;
    }
    a[x][y]=n*m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
