#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int n,d[1000],dt1[1000],dt2[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&d[i]);
    }
    dt1[0]=-1;
    dt1[1]=d[1];
    dt2[0]=d[0];
    dt2[1]=d[0]+d[1];
    for(int i=2;i<n;i++){
        dt1[i]=d[i]+max(dt1[i-2],dt2[i-2]);
        dt2[i]=d[i]+dt1[i-1];
    }
    printf("%d",max(dt1[n-1],dt2[n-1]));
}
