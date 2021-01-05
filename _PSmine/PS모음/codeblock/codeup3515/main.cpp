#include<stdio.h>
int v[100],s,n,a[100][100];
void f(int x,int y,int candy){
    if(y==n-1){
        if(s<candy){
            s=candy;
        }
        return;
    }
    v[x]=1;
    for(int i=0;i<n;i++){
        if(v[i]!=1){
            f(i,y+1,candy+a[i][y+1]);
        }
    }
    v[x]=0;
    return;
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        f(i,0,a[i][0]);
    }
    printf("%d",s);
}
