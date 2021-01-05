#include<stdio.h>
#include<algorithm>
using namespace std;
int n,a[1000],dt[1000];
int main(){
    scanf("%d",&n);
    n+=4;
    for(int i=4;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=4;i<n;i++){
        dt[i]=a[i]+max(a[i-1]+dt[i-3],max(dt[i-2],dt[i-4]+a[i-1]));
    }
    printf("%d",max(dt[n-1],dt[n-2]));
}
