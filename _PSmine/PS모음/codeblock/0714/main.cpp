#include<stdio.h>
/*#include<algorithm>
using namespace std;*/
int main(){
    /*pair <int,int> a[100000][2];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a.first,&a.second);
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        printf("%d %d",a[i].first,a[i].second);
    }*/
    int n,maax=0,m,b[111111]={0},a[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        b[a[i]]++;
    }
    for(int i=0;b[i]!=0;i++){
        if(maax<b[i]){
            maax=b[i];
            m=i;
        }
    }
    printf("%d",m);
}
