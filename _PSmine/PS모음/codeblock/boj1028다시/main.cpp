#include<stdio.h>
int a[100][100],n,m,index,miin,p[10000];
char tmp[100];
int chess(int x,int y){
    int c=0;
    for(int i=x;i<x+8;i++){
        for(int j=y;j<y+8;j++){
            if((x+y)%2==(i+j)%2&&a[x][y]!=a[i][j]){
                c++;
            }
            if((x+y+1)%2==(i+j)%2&&a[x][y]==a[i][j]){
                c++;
            }
        }
    }
    if(c>64-c){
        return 64-c;
    }
    else{
        return c;
    }
}

int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%s",tmp);
        for(int j=0;j<m;j++){
            if(tmp[j]=='B'){
                a[i][j]=0;
            }
            else{
                a[i][j]=1;
            }
        }
    }
    for(int i=0;i<=n-8;i++){
        for(int j=0;j<=m-8;j++){
            p[index]=chess(i,j);
            index++;
        }
    }
    miin=64;
    for(int i=0;i<index;i++){
        if(miin>p[i]){
            miin=p[i];
        }
    }
    printf("%d",miin);
}
