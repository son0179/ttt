#include<stdio.h>
#include<algorithm>
using namespace std;
int n,k,p[110],d[11000];
int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&p[i]);
    }
    sort(p+1,p+n+1);
    d[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=p[i];j<=k;j++){
            d[j]+=d[j-p[i]];
        }
    }
    printf("%d",d[k]);
}
