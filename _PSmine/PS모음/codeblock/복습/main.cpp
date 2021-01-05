/*#include<stdio.h>
int n,m,tree[1111111];
int bs(int s,int e){
    if(s==e||s==e-1){
        return s;
    }
    int mid=(s+e+1)/2,sum=0;
    for(int i=0;i<n;i++){
        if(tree[i]>mid){
            sum+=tree[i]-mid;
        }
    }
    if(sum>m){
        return bs(mid+1,e);
    }
    else{
        return bs(s,mid);
    }
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&tree[i]);
    }
    printf("%d",bs(0,2000000000));
}
*/
#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m[50000],dp1[50000],dp2[50000];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m[i]);
    }
    dp1[0]=m[0];
    dp1[1]=m[0]+m[1];
    dp2[0]=0;
    dp2[1]=m[1];
    for(int i=2;i<n;i++){
        dp1[i]=m[i]+max(dp2[i-1],dp1[i-2]);
        dp2[i]=m[i]+max(dp1[i-2],dp2[i-2]);
    }
    int maax=-1;
    for(int i=0;i<n;i++){
        if(max(dp1[i],dp2[i])>maax){
            maax=max(dp1[i],dp2[i]);
        }

    }
    printf("%d",maax);
}
