#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m,d[101][101] ,dt[101][101] ;
int main(){
   scanf("%d %d",&n,&m);
   for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&d[i][j]);
        }
   }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            dt[i][j]=max(dt[i-1][j],dt[i][j-1])+d[i][j];
        }
   }
   printf("%d",dt[n][m]);
}
