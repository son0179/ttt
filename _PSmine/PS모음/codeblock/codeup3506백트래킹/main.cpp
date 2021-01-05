#include<stdio.h>
int n,cnt;
void bt(int x){
    if(x==n-1){
        cnt++;
        return;
    }
    else if(x==n){
        cnt++;
        return;
    }
    else{
        bt(x+1);
        bt(x+2);
        return;
    }
}
int main(){
    scanf("%d",&n);
    bt(0);
    printf("%d",cnt);
}
