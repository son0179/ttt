#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m[500100];
long long s;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m[i]);
    }
    sort(m,m+n);
    for(int i=0;i<n;i++){
        if(m[i]-i-1<0){
            s+=-m[i]+i+1;
        }
        else{
            s+=m[i]-i-1;
        }
    }
    printf("%lld",s);
}
