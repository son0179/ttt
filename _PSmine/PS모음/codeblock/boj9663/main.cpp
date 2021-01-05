#include<stdio.h>
int n,chess[100][100],v1[100],v2[100],v3[100],c;
void queen(int x,int y){
    if(x==n-1){
        c++;
        return;
    }
    v1[y]=1;
    v2[x-y+n]=1;
    v3[x+y]=1;
    for(int i=0;i<n;i++){
        if(v1[i]==0&&v2[x+1-i+n]==0&&v3[x+1+i]==0){
            queen(x+1,i);
        }
    }
    v1[y]=0;
    v2[x-y+n]=0;
    v3[x+y]=0;
    return;
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        queen(0,i);
    }
    printf("%d",c);
}
