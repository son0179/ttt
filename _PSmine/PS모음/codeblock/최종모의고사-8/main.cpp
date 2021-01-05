#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m[600000];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&m[i]);
    }
    for(int i=1;i<=n;i++){
        int tmp=(int)(lower_bound(m+1,m+1+i,m[i])-m);
        printf("%d ",tmp);
    }
}
