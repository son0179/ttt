#include<stdio.h>
int a[200][200],n,m[2];
void f(int x,int y,int z){
    int tmp=a[x][y],c=z*z;
    for(int i=x;i<x+z;i++){
        for(int j=y;j<y+z;j++){
            if(tmp==a[i][j]){
                c--;
            }
        }
    }
    if(c==0){
        m[tmp]++;
    }
    else{
        f(x,y,z/2);
        f(x+z/2,y,z/2);
        f(x,y+z/2,z/2);
        f(x+z/2,y+z/2,z/2);
    }
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    f(1,1,n);
    printf("%d\n%d",m[0],m[1]);
}
