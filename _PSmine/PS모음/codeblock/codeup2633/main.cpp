#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int n,k,f[300000];
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&f[i]);
    }
    printf("%d",*lower_bound(f,f+n,k));
}
