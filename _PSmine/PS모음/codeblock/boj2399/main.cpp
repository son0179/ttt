#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int n,x[100000];
    int tmp=0,s=0,a=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x[i]);
        tmp+=x[i];
    }
    sort(x,x+n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            s+=x[j];
        }
        a+=tmp-s-x[i]*(n-i);
    }
    printf("%d",a);
}
