#include<stdio.h>
int n,m[10000][10];
int main(){
    for(int i=0;i<10;i++){
        m[1][i]=1;
    }
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<=j;k++){
                m[i][j]+=m[i-1][k];
                m[i][j]%=10007;
            }
        }
    }
    int s=0;
    for(int i=0;i<10;i++){
        s+=m[n][i];
        s%=10007;
    }
    printf("%d",s);
}
