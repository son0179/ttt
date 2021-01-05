#include<stdio.h>
int n,m[111111];
int s2, s1;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m[i]);
    }
    s1=-1000000;
    for(int i=0;i<n;i++){
        s2+=m[i];
        if(s2>s1){
            s1=s2;
        }
        if(s2<0){
            s2=0;
        }
    }
    printf("%d",s1);
}
