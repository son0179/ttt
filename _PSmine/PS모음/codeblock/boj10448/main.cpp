#include<stdio.h>
int a[1010],n,m[11000],c[11000];
int main(){
    scanf("%d",&n);
    a[1]=1;
    for(int i=2;i<=1000;i++){
        a[i]=a[i-1]+i;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&m[i]);
        for(int j=1;a[j]<=m[i];j++){
            for(int k=j;a[k]<=m[i];k++){
                for(int l=k;a[l]<=m[i]; l++){
                    if(a[j]+a[k]+a[l]==m[i]&&c[i]==0){
                        printf("1\n");
                        c[i]=1;
                    }
                }
            }
        }
        if(c[i]==0){
            printf("0\n");
        }
    }
}
