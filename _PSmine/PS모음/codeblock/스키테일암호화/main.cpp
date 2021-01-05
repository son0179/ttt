#include<stdio.h>
char a[10000];
int n,hl;
int main(){
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++){
        hl++;
    }
    hl--;
    for(int i=0;i<=hl;i++){
        printf("%c",a[n]);
        n+=5;
        if(n>hl){
            n=n-hl;
        }
    }
}
