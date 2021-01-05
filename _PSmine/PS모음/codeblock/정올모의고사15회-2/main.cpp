#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m,ch[101000],index,ch2[101000];
pair <int,int> a[110000];
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d %d",&a[i].first,&a[i].second);
    }
    for(int i=0;i<m;i++){
        ch[a[i].first]=1;
        ch[a[i].second]=1;
        index++;
    }
    for(int i=1;i<=n;i++){
        if(ch[i]==0){
            a[index].first=i;
            a[index].second=2147483647;
            index++;
        }
    }
    sort(a,a+index);
    for(int i=0;i<index;i++){
        if(ch2[a[i].first]==0){
            ch2[a[i].first]=1;
            printf("%d ",a[i].first);
        }
        if(a[i].second!=2147483647&&ch2[a[i].second]==0){
            ch2[a[i].second]=1;
            printf("%d ",a[i].second);
        }
    }
}
