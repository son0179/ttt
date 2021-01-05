#include<stdio.h>
#include<algorithm>
using namespace std;
int a[111111],b[111111],dp1[111111],dp2[111111],n,m;
int main(){
    while(1){
        scanf("%d %d",&n,&m);
        if(n==0&&m==0) return 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&a[j]);
            }
            dp1[0]=a[0];
            dp2[0]=0;
            for(int j=1;j<m;j++){
                dp1[j]=a[j]+dp2[j-1];
                dp2[j]=max(dp1[j-1],dp2[j-1]);
            }
            b[i]=max(dp1[m-1],dp2[m-1]);
        }
        dp1[0]=b[0];
        dp2[0]=0;
        for(int i=1;i<n;i++){
            dp1[i]=b[i]+dp2[i-1];
            dp2[i]=max(dp1[i-1],dp2[i-1]);
        }
        printf("%d\n",max(dp1[n-1],dp2[n-1]));
    }
}
