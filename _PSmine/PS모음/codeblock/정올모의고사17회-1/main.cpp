//신입 사원
#include<stdio.h>
#include<algorithm>
using namespace std;
int t,n;
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

        for(int i=0;i<n;i++){
            int ch=0;
            for(int j=i-1;j>=0;j--){
                if(m[j].second<m[i].second){
                    ch=1;
                    break;
                }
            }
            if(ch==0) cnt++;
        }
        printf("%d\n",cnt);
    }
}
