#include<stdio.h>
int n,k,a[15],m,c,a10[15],l;
int main(){
    m++;
    scanf("%d %d",&n,&k);
    for(int i=1;i<10;i++){
        a10[i]=m*9*i;
        m*=10;
    }
    int h=n,g=0;
    for(int i=1;i<10;i++){
        if(h/10!=0){
            g+=a10[i];
            h/=10;
        }
    }
    int nn=0, kk=1;
    h=n;
    while(h!=0){
        h/=10;
        nn++;
        kk*=10;
    }
    kk/=10;
    int u=n-kk+1;

    g+=nn*u;

    if(g<k){
        printf("-1");
        return 0;
    }

    int mm=1, mma=1;
    for(int i=1;k-a10[i]>0;i++){
        if(k-a10[i]>0){
            k-=a10[i];
            mm++;
            mma*=10;
        }
        else if(k-a10[i]==0){
            printf("9");
            return 0;
        }
    }

    int q=(k-1)/mm, r=(k-1)%mm;
    int xx=mma+q;
    int ans;
    for(int i=1;i<=mm-r;i++){
        ans=xx%10;
        xx/=10;
    }
    printf("%d", ans);



}
