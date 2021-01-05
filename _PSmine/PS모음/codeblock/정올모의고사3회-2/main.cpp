#include<stdio.h>
int n,a[100],maax;
void bt(int x,int y,int z){
    if(z==3){
        int s=1;
        for(int i=x+1;i<n;i++){
            s*=a[i];
        }
        if(maax<y+s){
            maax=y+s;
        }
    }
    else{
        for(int j=x+1;j<n-3+z;j++){
            int s=1;
            for(int i=x+1;i<=j;i++){
                s*=a[i];
            }
            bt(j,y+s,z+1);
        }
    }
    return;
}
int main(){
    maax=-2100000000;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-3;i++){
        int s=1;
        for(int j=0;j<=i;j++){
            s*=a[j];
        }
        bt(i,s,1);
    }
    printf("%d",maax);
}
