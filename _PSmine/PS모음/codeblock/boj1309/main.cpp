#include<stdio.h>
int main(){
    int a[150000],b[150000],n;
    scanf("%d",&n);
    a[1]=3;
    b[1]=2;
    for(int i=2;i<=n;i++){
        a[i]=2*b[i-1]+a[i-1];
        a[i]%=9901;
        b[i]=a[i-1]+b[i-1];
        b[i]%=9901;
    }
    printf("%d",a[n]);
}
