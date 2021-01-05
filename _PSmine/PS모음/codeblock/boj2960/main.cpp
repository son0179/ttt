#include<stdio.h>
int n,m[2000],k,l,p;
int main(){
    scanf("%d %d",&n,&k);
    for(int i=2;i<=n;i++){
        m[i]=i;
    }
    p+=2;
    while(l<k){
        for(int i=p;i<=n;i++){
            if(m[i]%m[p]==0){
                l++;
                m[i]=-1;
                if(l==k){
                    printf("%d",m[i]);
                    return 0;
                }
            }
        }
        for(int i=2;i<=n;i++){
            if(m[i]!=-1){
                p=i;
                break;
            }
        }
    }
    printf("%d",m[p]);
    for(int i=0;i<14;i++){
        printf("%d ",m[i]);
    }
}
