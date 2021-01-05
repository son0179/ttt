#include<stdio.h>
#include<algorithm>
#define INF 210000000
using namespace std;
int n,k,p[110],d[11000];
int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&p[i]);
    }
    for(int u=0;u<=k;u++){
        d[u]=INF;
    }
    sort(p+1,p+n+1);
    d[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=p[i];j<=k;j++){
            d[j]=min(d[j-p[i]]+1,d[j]);
        }
    }
    if(d[k]==INF){
        printf("%d",-1);
    }
    else{
        printf("%d",d[k]);
    }
}
