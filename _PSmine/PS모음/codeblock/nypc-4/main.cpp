#include<stdio.h>
#include<algorithm>
using namespace std;
pair < int , pair<int,int> > b[1000000];
int n,s,k,a[1000000];
int main(){
    scanf("%d %d %d",&n,&s,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]<s){
            b[i].first=s-a[i];
        }
        else{
            b[i].first=a[i]-s;
        }
        b[i].second.first=a[i]-s;
        b[i].second.second=i;
    }
    sort(b+1,b+n+1);
    for(int i=1;i<=k;i++){
        printf("%d ",b[i].second.second);
    }
}
