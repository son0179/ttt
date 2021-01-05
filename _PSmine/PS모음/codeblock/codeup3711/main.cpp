#include<stdio.h>
int a,b,k,n[10];
int f(int x){
    int s=1;
    for(int i=1;i<x;i++){
        s*=10;
    }
    return x*s;
}
int g(int x){
    //printf("x: %d\n", x);
    if(x<0) return 0;
    if(x<10){
        if(k==0) return 0;
        if(k>x){
            return 0;
        }
        else{
            return 1;
        }
    }
    int tmp=x,p=0,q=1;
    while(tmp>0){
        tmp/=10;
        p++;
        q*=10;
    }
    p--;
    q/=10;
    if(x/q<k||k==0){
        return x/q*f(p)+g(x%q);
    }
    else if(x/q==k){
        return x/q*f(p)+g(x%q)+x%q+1;
    }
    else{
        return q+x/q*f(p)+g(x%q);
    }
}
int main(){
    scanf("%d %d %d",&a,&b,&k);
    //for(int i=1;i<=5;i++) printf("%d ", f(i));
    //printf("\n");
  //  printf("ans %d %d\n", g(b), g(a-1));
    printf("%d",g(b)-g(a-1));
}
