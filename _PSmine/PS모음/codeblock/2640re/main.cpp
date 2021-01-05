#include<stdio.h>
long long a[500];
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    a[0]=1;
    a[1]=n;
    for(int i=2;i<500;i++){
        a[i]=a[i-1]*a[i-1];
        a[i]%=1000000007;
    }
    int cnt=1;
    long long s=1;
    while(k>0){
        if(k%2==1){
            s*=a[cnt];
        }
        cnt++;
        k/=2;
    }
    printf("%lld",s);
}
