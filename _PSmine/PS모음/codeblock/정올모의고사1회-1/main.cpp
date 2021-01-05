#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m[300000],lindex,rindex,l[300000],r[300000],c;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(c==1){
            scanf("%d",&r[rindex]);
            rindex++;
        }
        else{
            scanf("%d",&l[i]);
        }
        if(l[i]==-1){
            c=1;
            lindex=i;
        }
    }
    sort(l,l+lindex);
    sort(r,r+rindex);
    printf("%d",r[0]+l[0]);
}
