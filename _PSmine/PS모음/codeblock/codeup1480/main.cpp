#include<stdio.h>
int a[110][110],x,y,sy,sx,n,m,l;
int main(){
    scanf("%d %d",&n,&m);
    if(m==1){
        for(int i=n;i>0;i--){
            printf("%d\n",i);
        }
    }
    else{
        x=n-1;
        y=m-1;
        sy=m-1;
        sx=n-1;
        while(l<n*m){
            l++;
            a[x][y]=l;
            if(x==n-1||y==0){

                if(x==n-1){
                    sx--;
                    if(sx<0){
                        x=0;
                        sy--;
                        y=sy;
                    }
                    else{
                          x=sx;
                        y=m-1;
                    }

                }
                else{
                    y=x-1;
                    x=0;
                }
            }
            else{
                x++;
                y--;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
}
