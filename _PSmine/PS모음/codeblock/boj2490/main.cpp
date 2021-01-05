#include<stdio.h>
int main(){
    char n[5]={'E','A','B','C','D'};
    for(int i=0;i<3;i++){
        int a,b,C,d;
        scanf("%d %d %d %d",&a,&b,&C,&d);
        int c=0;
        if(a==0){
            c++;
        }
        if(b==0){
            c++;
        }
        if(C==0){
            c++;
        }
        if(d==0){
            c++;
        }
        printf("%c\n",n[c]);
    }
}
