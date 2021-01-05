#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m[150000],cnt,lis[150000];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m[i]);
    }
    lis[0]=m[0];
    cnt=0;
    for(int i=1;i<n;i++){
        if(lis[cnt]<m[i]){
            lis[cnt+1]=m[i];
            cnt++;
        }
        else{
            lis[(int)(lower_bound(lis,lis+cnt,m[i])-lis)]=m[i];
        }
    }
    printf("%d",cnt+1);
}
