#include<stdio.h>
int n,m,x,y,a[105][105];
int main(){
    int k[4][2]={{0,-1},{-1,0},{0,-1},{1,0}},b=0,l=1;
    scanf("%d %d",&n,&m);
    l=n*m;
    x=n;
    y=m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            a[i][j]=1;
        }
    }
    while(l>1){
        while(a[k[b%4][0]+x][y+k[b%4][1]]==1){
            a[x][y]=l;
            x+=k[b%4][0];
            y+=k[b%4][1];
            l--;
        }
        b++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
