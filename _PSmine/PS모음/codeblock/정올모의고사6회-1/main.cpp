#include<stdio.h>
int n,m[1111000];
int main(){
    scanf("%d",&n);
    m[1]=1;
    m[2]=2;
    for(int i=3;i<=n;i++){
        m[i]=m[i-1]+m[i-2];
        m[i]%=15746;
    }
    printf("%d",m[n]);
}
