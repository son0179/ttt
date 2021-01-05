#include<stdio.h>
int main(){
    int k,x,y,sx,sy,n,m,a[105][105];
    scanf("%d %d",&n,&m);
    x=n-1;
    y=0;
    sx=n-1;
    sy=0;
    k=1;
    while(k<=n*m){
        a[x][y]=k;
        k++;
        if(x==0||y==0){
            if(sy<m-1){
                sy++;
                y=sy;
                x=n-1;
            }
            else{
                sx--;
                x=sx;
                y=m-1;
            }
        }
        else{
            x--;
            y--;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
