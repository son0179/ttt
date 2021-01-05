#include<stdio.h>
int n,m,a[1000][1000],v[1000],x,y;
int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d %d",&x,&y);
        a[x][y]=1;
        a[y][x]=1;
    }
    int s=0;
    v[1]=1;
    for(int i=1;i<=n;i++){
        if(a[1][i]==1){
            if(v[i]==0) s++;
            v[i]=1;
            for(int j=1;j<=n;j++){
                if(a[i][j]==1&&v[j]==0){
                    s++;
                    v[j]=1;
                }
            }
        }
    }

    printf("%d",s);
}
