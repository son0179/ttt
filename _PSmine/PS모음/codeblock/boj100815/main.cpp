#include<stdio.h>
////10815¹ø
#include<algorithm>
using namespace std;
int n,m,sc[1000000],num[1000000];
int bs(int s,int e,int x){
    int mid=(s+e)/2;
    if(s>=e){
        if(x==sc[mid]){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(sc[mid]>=x){
        return bs(s,mid,x);
    }
    else{
        return bs(mid+1,e,x);
    }
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d ",&sc[i]);
    }
    sort(sc+1,sc+n+1);
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        scanf("%d",&num[i]);
    }
    for(int i=1;i<=m;i++){
        printf("%d ",bs(1,n,num[i]));
    }
}
