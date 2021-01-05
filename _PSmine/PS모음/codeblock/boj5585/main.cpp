#include<stdio.h>
int main(){
    int n,d=0,a[6]={500,100,50,10,5,1},index=0,m=0;
    scanf("%d",&n);
    while(d!=1000-n){
        if(1000-n-d-a[index]>=0){
            m++;
            d+=a[index];
        }
        else{
            index++;
        }
    }
    printf("%d",m);
}
