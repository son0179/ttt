#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int tmp=-10000,n,m[110000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m[i]);
    }
    sort(m,m+n);
    for(int i=0;i<n;i++){
        if(tmp!=m[i]){
            printf("%d ",m[i]);
        }
        tmp=m[i];
    }
}
