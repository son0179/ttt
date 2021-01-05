#include<stdio.h>
int t;
int main(){
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int bezzi[4],dao[4],bs=0,ds=0,bi=-2100000000,di=-2100000000;
        for(int j=0;j<4;j++){
            scanf("%d",&bezzi[j]);
            bs+=bezzi[j];
            if(bi<bezzi[j]){
                bi=bezzi[j];
            }
        }
        for(int j=0;j<4;j++){
            scanf("%d",&dao[j]);
            ds+=dao[j];
            if(di<dao[j]){
                di=dao[j];
            }
        }
        if(bs>ds&&bi<=di){
            printf("S\n");
        }
        else if(bs<=ds&&bi>di){
            printf("I\n");
        }
        else{
            printf("R\n");
        }
    }
}
