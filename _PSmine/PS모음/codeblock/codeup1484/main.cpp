#include<stdio.h>
int main(){
    int n,m,x=0,y=0,z=1,k[4][2]={{0,1},{1,0},{0,-1},{-1,0}},b=0,a[155][155];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=-1;
        }
    }
    while(z<n*m){
        while(a[k[b%4][0]+x][k[b%4][1]+y]==-1&&z<n*m){
            a[x][y]=z;
            z++;
            x+=k[b%4][0];
            y+=k[b%4][1];
        }
        b++;
    }
    a[x][y]=n*m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
}
