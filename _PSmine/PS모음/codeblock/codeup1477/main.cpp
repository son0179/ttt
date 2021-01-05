#include<stdio.h>
int l,a[1000][1000],n,m,sx,sy,x,y;
int main(){
    scanf("%d %d",&n,&m);
    x=0;
    y=m-1;
    sy=m-1;
    while(l<n*m){
        l++;
        a[x][y]=l;
        if(y==m-1||x==n-1){
            if(sy>0){
                sy--;
            }
            else{
                sx++;
            }
            x=sx;
            y=sy;
        }

        else{
            x++;
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
