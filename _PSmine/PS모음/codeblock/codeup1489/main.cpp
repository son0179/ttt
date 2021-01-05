#include<stdio.h>
int a[1000][1000],n,m,i,j,num,b;
int main(){
    scanf("%d %d",&n,&m);
    i=n;
    j=m;
    for(int x=1;x<=n;x++){
        for(int y=1;y<=m;y++){
            a[x][y]=1;
        }
    }
    int k[4][2]={{0,-1},{-1,0},{0,1},{1,0}};
    num=n*m;
    while(num>1){
        while(a[i+k[b%4][0]][j+k[b%4][1]]==1){
            a[i][j]=num;
            i=i+k[b%4][0];
            j=j+k[b%4][1];
            num--;
        }
        b++;
    }
    for(int l=1;l<=n;l++){
        for(int k=1;k<=m;k++){
            printf("%d ",a[l][k]);
        }
        printf("\n");
    }
}
