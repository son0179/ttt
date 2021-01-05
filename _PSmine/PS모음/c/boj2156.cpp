#include<stdio.h>
#include<algorithm>
using namespace std;
int n,a[11000],k[5],dp1[11000],dp2[11000],dp3[11000];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	dp1[1]=a[1];
	dp2[1]=0;
	dp3[1]=0;
	dp1[2]=a[1]+a[2];
	dp2[2]=a[2];
	dp3[2]=0;
	dp1[3]=a[3]+max(dp2[2],dp3[2]);
	dp2[3]=a[1]+a[3];
	dp3[3]=a[3];
	for(int i=4;i<=n;i++){
		dp1[i]=a[i]+max(dp2[i-1],dp3[i-1]);
		dp2[i]=a[i]+max(dp1[i-2],max(dp2[i-2],dp3[i-2]));
		dp3[i]=a[i]+max(dp1[i-3],max(dp2[i-3],dp3[i-3]));
	}
	for(int i=1;i<=n;i++){
		k[i]=max(dp1[i],max(dp2[i],dp3[i]));
	}
	printf("%d",max(k[n],max(k[n-1],k[n-2])));
}
