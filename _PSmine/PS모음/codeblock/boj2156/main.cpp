#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int n,a[10000],d1[10000],d2[10000],d3[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    d1[0]=a[0];
    d2[0]=0;
    d3[0]=0;
    d1[1]=a[0]+a[1];
    d2[1]=a[1];
    d3[1]=0;
    d1[2]=d2[1]+a[2];
    d2[2]=d1[0]+a[2];
    d3[2]=a[2];
    for(int i=3;i<n;i++){
        d1[i]=a[i]+max(d2[i-1],d3[i-1]);
        d2[i]=a[i]+max(d1[i-2],max(d2[i-2],d3[i-2]));
        d3[i]=a[i]+max(d1[i-3],max(d2[i-3],d3[i-3]));
    }
    int k[4];
    for(int i=1;i<=3;i++){
        k[i]=max(d1[n-i],max(d2[n-i],d3[n-i]));
    }
    printf("%d",max(k[1],max(k[2],k[3])));
}
