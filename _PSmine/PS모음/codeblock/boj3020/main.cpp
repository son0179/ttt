#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int n,h,a[110000],b[110000],miin=2100000000,cnt=0;
    scanf("%d %d",&n,&h);
    int m=n/2;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    sort(a,a+m);
    sort(b,b+m);
    for(int i=1;i<=h;i++){
        int j=m-(int)(lower_bound(a,a+m,i)-a);
        int k=m-(int)(lower_bound(b,b+m,h-i+1)-b);
        if(j+k==miin){
            cnt++;
        }
        if(j+k<miin){
            miin=j+k;
            cnt=1;
        }

    }
    printf("%d %d",miin,cnt);
}
