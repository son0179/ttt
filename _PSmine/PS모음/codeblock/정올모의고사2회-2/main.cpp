#include<stdio.h>
int n,r,c;
int f(int x,int y){
    if(x==0){
        return y;
    }
    else{
        return f(x-1,2*y);
    }
}
void z(int x,int y,int i,int j){
    if(x==r&&y==c){
        printf("%d",j);
        return;
    }
    else if(i==0){
        return;
    }
    else{
        if(x<=r&&r<x+f(i-1,1)&&y<=c&&c<y+f(i-1,1))  z(x,y,i-1,j);
        else if(x<=r&&r<x+f(i-1,1)&&y+f(i-1,1)<=c&&c<y+2*f(i-1,1))  z(x,y+f(i-1,1),i-1,j+f(2*i-2,1));
        else if(x+f(i-1,1)<=r&&r<x+2*f(i-1,1)&&y<=c&&c<y+f(i-1,1))  z(x+f(i-1,1),y,i-1,j+2*f(2*i-2,1));
        else  z(x+f(i-1,1),y+f(i-1,1),i-1,j+3*f(2*i-2,1));
    }
}
int main(){
    scanf("%d %d %d",&n,&r,&c);
    z(0,0,n,0);
}
