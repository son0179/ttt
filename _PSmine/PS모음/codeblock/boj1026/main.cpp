#include<stdio.h>
#include<algorithm>
using namespace std;
int n,a[100],b[100];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&b[i]);
    }
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    int s=0,j=n;
    for(int i=1;i<=n;i++){
        s+=a[j]*b[i];
        j--;
    }
    printf("%d",s);
}
