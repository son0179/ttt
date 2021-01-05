#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    long long n,m[110000],maxn,maxc=0,recn,recc=0;
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        scanf("%lld",&m[i]);
    }
    sort(m,m+n);
    for(int i=0;i<n;i++){
        if(i==0){
            maxn=m[i];
            maxc++;
            recn=m[i];
            recc++;
        }
        else{
            if(recn==m[i]){
                recc++;
            }
            else{
                recn=m[i];
                recc=1;
            }
            if(recc>maxc){
                maxc=recc;
                maxn=recn;
            }
        }
    }
    printf("%lld",maxn);
}
