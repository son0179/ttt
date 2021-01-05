#include<stdio.h>
int a[105][105],n,m,x,y,p,sx,sy;
int main(){
    scanf("%d %d",&n,&m);
    x=n-1;
    y=m-1;
    sx=x;
    sy=y;
    while(p<n*m){
        p++;
        a[x][y]=p;

        if(x==0||y==m-1){
            if(sy!=0){
                sy--;
                y=sy;
                x=n-1;
            }
            else{
                sx--;
                x=sx;
                y=0;
            }
        }
        else{
            x--;
            y++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }
}
