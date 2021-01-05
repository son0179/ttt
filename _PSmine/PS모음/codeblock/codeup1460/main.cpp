#include<stdio.h>
int main(){
    int n,m;
    int c=1;
    int a[101][101];
    scanf("%d %d",&n,&m);
    for(int i=m;i>0;i--){
        for(int j=1;j<=n;j++){
            a[j][i]=c;
            c++;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
