#include<stdio.h>
int n,ten[10],a;
int main(){
    ten[0]=1;
    for(int i=1;i<5;i++){
        ten[i]=ten[i-1]*10;
    }
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int d=0;
        for(int j=0;i/ten[j]>0;j++){
            d++;
        }
        d--;
        int c=0,tmp_=0,tmp=ten[d];
        for(int j=d-1;j>=0;j++){
            if(i/tmp>i/ten[j]){
                if(i/tmp-i/ten[j]!=tmp_){
                    c++;
                }
            }
            else{
                if(i/ten[j]-i/tmp!=tmp_){
                    c++;
                }
            }
        }
        if(c==0){
            a++;
        }
    }
    printf("%d",a);
}
