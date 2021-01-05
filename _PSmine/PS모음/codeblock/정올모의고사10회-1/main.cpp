#include<stdio.h>
int n;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a,b,c;
        scanf("%d %d",&a,&b);
        c=1;
        for(int j=0;j<b;j++){
            c*=a;
            c%=10;
        }
        if(c==0) printf("10\n");
        else printf("%d\n",c);
    }
}
