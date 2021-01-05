#include<stdio.h>
#include<algorithm>
using namespace std;
int x,cnt,m[1000];
int lis[1000];
pair <int,int> a[1000];
int main(){
	scanf("%d",&x);
	for(int i=0;i<x;i++){
		scanf("%d %d",&a[i].first,&a[i].second);
	}
    sort(a,a+x);
    for(int i=0;i<x;i++){
		m[i]=a[i].second;
	}
    lis[0]=m[0];
    cnt=0;

    for(int i=1;i<x;i++){
        if(lis[cnt]<m[i]){
            lis[cnt+1]=m[i];
            cnt++;
        }
        else{
            *lower_bound(lis,lis+cnt+1,m[i])=m[i];
        }
    }
    printf("%d",x-cnt-1);
}
