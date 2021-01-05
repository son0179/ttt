#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m[1100000],cnt,lis[1100000],maax;
int main(){
    maax=-2100000000;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&m[i]);
        lis[i]=lis[i-1]+m[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
           if(lis[j]-lis[i]>maax){
               maax=lis[j]-lis[i];
           } 
        }
    }
    printf("%d",maax);
}


