#include<stdio.h>
#include<algorithm>
using namespace std;
int d[1000100],a[1000100];
int main(){
    int n,i=0,j,s=2100000000,x,y;
    scanf("%d",&n);
    j=n-1;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }z
    sort(a,a+n);
    while(i!=j){
        int tmp=a[i]+a[j];
        if(tmp>0){
            if(tmp<s){
                s=tmp;
                x=a[i];
                y=a[j];
            }
            j--;
        }
        else{
            if(-tmp<s){
                s=-tmp;
                x=a[i];
                y=a[j];
            }
            i++;
        }
    }
    printf("%d %d",x,y);
}
