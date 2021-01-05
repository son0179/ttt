#include<stdio.h>
#include<algorithm>
using namespace std;
int t,n,lis[111111];
pair <int,int> m[111111];
int main(){
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int cnt=0;
        scanf("%d",&n);
        for(int j=0;j<n;j++){
            scanf("%d %d",&m[j].first,&m[j].second);
        }
        sort(m,m+n);
        cnt++;
        int minimum=m[0].second;
        for(int i=1;i<n;i++){
            if(minimum>m[i].second){
                cnt++;
                minimum=m[i].second;
            }
        }
        printf("%d\n",cnt);
    }
}
