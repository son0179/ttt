#include<stdio.h>
int n,m,tmp,tree[1100000];
int bs(int s,int e){
    int mid=s+e+1;
    mid/=2;
    if(s==e){
        return mid;
    }
    else{
        long long sum=0;
        for(int i=0;i<n;i++){
            if(tree[i]>mid){
                sum+=tree[i]-mid;
            }
        }
        if(sum>=m){
            return bs(mid,e);
        }
        else{
            return bs(s,mid-1);
        }
    }
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&tree[i]);
    }
    printf("%d",bs(0,2000000000));
}
