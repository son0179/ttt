#include<stdio.h>
char a[1000];
int hl,b[1000],t,p;
int main(){
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++){
        hl++;
    }
    for(int i=0;i<hl;i++){
        b[i]=a[i]-'A';
    }
    for(int i=0;i<hl;i++){
        if(p>b[i]){
            if(p-b[i]>b[i]+26-p){
                t+=b[i]+26-p;
            }
            else{
                t+=p-b[i];
            }
        }
        else{
            if(b[i]-p>p+26-b[i]){
                t+=p+26-b[i];
            }
            else{
                t+=b[i]-p;
            }
        }
        p=b[i];


    }
    printf("%d",t);
}
