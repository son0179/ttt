#include<stdio.h>
int x,a;
int main(){
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        int k,l[10],o=0;
        for(int j=1;j<=1000;j*=10){
            if(i/j>0){
                k=j;
                o++;
            }
            else{
                break;
            }
        }
        if(o==1||o==2){
            a++;
        }
        else{
            for(int d=0;d<o;d++){
                l[d]=i/k%10;
                k/=10;
            }
            int c=1,tmp=l[1]-l[0];
            for(int d=2;d<o;d++){
                if(tmp!=l[d]-l[d-1]){
                    c=0;
                }
            }
            a+=c;
        }

    }
    printf("%d",a);
}
