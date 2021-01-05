#include<stdio.h>
long long s,a,x,f[1000],d[1000];
int c;
int main(){
    scanf("%lld %lld",&a,&x);
    a=a%1000000007;
    f[0]=a;
    d[0]=1;
    for(int i=1;i<64;i++){
        f[i]=f[i-1]*f[i-1]%1000000007;
        d[i]=d[i-1]*2;
    }
    for(int i=1;i<64;i++){
        if(d[i]<=x){
            c=i;
        }
        else{
            break;
        }
    }
    s=1;
    for(int i=c;x>0&&i>=0;i--){
        if(x>=d[i]){
            s*=f[i];
            x-=d[i];
            s%=1000000007;
        }
    }
    printf("%lld", s);


}
