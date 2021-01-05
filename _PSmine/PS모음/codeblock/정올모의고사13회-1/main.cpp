#include<stdio.h>
int a[1000000],n;
int main(){
    scanf("%d",&n);
    a[0]=1;
    for(int i=1;i<1000000;i++){
        if(a[i-1]>=n){
            printf("%d",i);
            return 0;
        }
        a[i]=a[i-1]+6*i;
    }
}
