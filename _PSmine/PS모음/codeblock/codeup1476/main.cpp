#include<stdio.h>
int main(){
    int a[100][100],n,m;
    scanf("%d %d",&n,&m);
    n--;
    m--;
    int x=0,y=0,i=1,s=1,l=1;
    while(1){
        a[x][y]=i;
        if(x==n&&m==y){
            break;
        }
        else{
            if(y==m||x==0){
                if(s<=n){
                    x=s;
                    y=0;
                    s++;
                }
                else{
                    x=n;
                    y=l;
                    l++;
                }
            }
            else{
                x--;
                y++;
            }
        }
        i++;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
