#include<stdio.h>
int main(){
    int l=0,e,f,c,k=0;
    scanf("%d %d %d",&e,&f,&c);
    l=e+f;
    while(l>=c){
        l-=c;
        l++;
        k++;
    }
    printf("%d",k);
}
