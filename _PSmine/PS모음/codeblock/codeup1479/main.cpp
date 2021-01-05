#include<stdio.h>
int a[110][110],x,y,sy,sx,n,m,l;
int main(){
    scanf("%d %d",&n,&m);
    if(m==1){
        for(int i=0;i<n;i++){
            printf("%d\n",i+1);
        }
    }
    else{
    x=0;
    y=m-1;
    sy=m-1;
    while(l<n*m){
        l++;
        a[x][y]=l;
        if(x==0||y==0){

            if(x==0){
                if(sx>=n-1){
                    sy--;
                    y=sy;
                    x=n-1;
                }
                else{
                     y=m-1;
                    sx++;
                    x=sx;
                }

            }
            else{
                if(x>=n-m){

                    sy--;
                    y=sy;
                    x=n-1;
                }
                else{
                    y=m-1;
                    sx++;
                    x=sx;
                }
            }
        }
        else{
            x--;
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
