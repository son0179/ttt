#include<stdio.h>
int main(){
    int h,m;
    scanf("%d %d",&h,&m);
    if(h==0){
        if(m>=45){
            printf("0 %d",m-45);
        }
        else{
            printf("23 %d",15+m);//60-( 45-m)
        }
    }
    else{
        if(m>=45){
            printf("%d %d",h,m-45);
        }
        else{
            printf("%d %d",h-1,15+m);//60-( 45-m)
        }
    }
}
