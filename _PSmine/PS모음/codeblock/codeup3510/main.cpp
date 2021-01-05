#include<stdio.h>
#include<algorithm>
using namespace std;
int d,b,n,maax,m[100];
void bt(int x,int index){
    for(int i=index+1;i<n;i++){
        if(x+m[i]<=b){
            if(maax<x+m[i]){
                maax=x+m[i];
            }
            bt(x+m[i],i);
        }
        else{
            break;
        }
    }
    return;
}
int main(){
    scanf("%d %d",&b,&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m[i]);
    }
    sort(m,m+n);
    for(int i=0;i<n;i++){
        bt(m[i],i);
    }
    printf("%d",maax);
}
