#include<stdio.h>
int main(){
    int n,x[10000];
    long long s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(x[i]<x[j]){
                s+=x[j]-x[i];
            }
            else{
                s+=x[i]-x[j];
            }
        }
    }
    printf("%lld",s);
}
