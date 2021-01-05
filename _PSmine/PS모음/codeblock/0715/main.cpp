#include<stdio.h>
int l,n,a[1000000001][1000000001],t=0,ti[1000000000],x,y;
char dir[2000000001],d='R';
int f(void){
    if(a[x][y]==1){
        return t;
    }
    else{
         if()
    }
}
int main(){
    int s=0;
     scanf("%d %d",&l,&n);
     x=l+1;
     y=l+1;
     for(int i=0;i<l+2;i++){
        a[0][i]=1;
        a[2*l+2][i]=1;
     }
     for(int i=0;i<l+2;i++){
        a[i][0]=1;
        a[i][2*l+2]=1;
     }
     dir(1=)
     for(int i=1;i<=n;i++){
        scanf("%d %c",&ti[i],&dir[i]);
     }
     printf("%d",f());
}

