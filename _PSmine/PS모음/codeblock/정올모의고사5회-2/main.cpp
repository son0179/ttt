#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m,a[10000],b[10000];
long long c, t,sa[10000],sb[10000],a_index,a_[1100000],b_index,b_[1100000];
int main(){
    scanf("%lld",&t);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            sa[i]+=a[j];
        }
    }
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        scanf("%d",&b[i]);
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            sb[i]+=b[j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            a_[a_index]=sa[j]-sa[i-1];
            a_index++;
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=i;j<=m;j++){
            b_[b_index]=sb[j]-sb[i-1];
            b_index++;
        }
    }
    sort(a_,a_+a_index);
    sort(b_,b_+b_index);
    for(int i=0;i<a_index;i++){
        c+=upper_bound(b_,b_+b_index,t-a_[i])-lower_bound(b_,b_+b_index,t-a_[i]);
    }
    printf("%lld",c);
}
