#include<stdio.h>
int a[109][109],n,m,k[4][2]={{1,0},{0,-1},{-1,0},{0,1}},t,b,x,y;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            a[i][j]=-1;
        }
    }
    x=1;
    y=m;
    t=n*m;
    while(t>1){
        while(a[x+k[b%4][0]][y+k[b%4][1]]==-1){
            a[x][y]=t;
            t--;
            x+=k[b%4][0];
            y+=k[b%4][1];
        }
        b++;
    }
    a[x][y]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
