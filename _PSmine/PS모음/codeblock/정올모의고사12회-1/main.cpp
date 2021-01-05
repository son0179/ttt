#include<stdio.h>
int n;
long long s;
int main(){
    scanf("%d",&n);
    s=1;
    for(int i=1;i<n;i+=2){
        s*=(n-i);
        s%=1000000007;
    }
    printf("%lld",s);
}
