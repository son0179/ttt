#include<stdio.h>
int main(){
    int a[105][105],n,m,x,y,sx,sy,k=1;
    scanf("%d %d",&n,&m);
    x=n-1;
    y= 0;
    sx=n-1;
    sy=0;
    while(k<=n*m){
        a[x][y]=k;
        k++;
        if(x==n-1||y==m-1){
            if(sx!=0){
                sx--;
                x=sx;
                y=0;
            }
            else{
                sy++;
                y=sy;
                x=0;
            }
        }
        else{
            x++;
            y++;
        }

    }
    for(int i=0;i<n;i+=1){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
