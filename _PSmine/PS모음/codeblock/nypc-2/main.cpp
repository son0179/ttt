#include<stdio.h>
int t1[3],t2[3],t3[3],t1s,t2s,t3s,n,a,b,c;
int main(){
    scanf("%d:%d:%d",&t1[0],&t1[1],&t1[2]);
    scanf("%d:%d:%d",&t2[0],&t2[1],&t2[2]);
    scanf("%d:%d:%d",&t3[0],&t3[1],&t3[2]);
    scanf("%d",&n);
    t1s=t1[0]*6000+t1[1]*100+t1[2];
    t2s=t2[0]*6000+t2[1]*100+t2[2];
    t3s=t3[0]*6000+t3[1]*100+t3[2];
    for(int i=0;i<n;i++){
        scanf("%d:%d:%d",&a,&b,&c);
        int s=a*6000+b*100+c;
        if(s<=t3s){
            printf("***\n");
        }
        else if(s<=t2s){
            printf("**\n");
        }
        else if(s<=t1s){
            printf("*\n");
        }
        else{
            printf(":(\n");
        }
    }
}
