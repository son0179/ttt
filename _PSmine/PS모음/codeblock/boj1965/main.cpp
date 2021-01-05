#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int n,m[10000],lis[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m[i]);
    }
    int cnt=0;
    lis[0]=m[0];
    for(int i=1;i<n;i++){
        if(m[i]>lis[cnt]){
            cnt++;
            lis[cnt]=m[i];
        }
        else{
            *lower_bound(lis,lis+cnt+1,m[i])=m[i];
        }
    }
    printf("%d",cnt+1);
}
