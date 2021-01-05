#include<stdio.h>
#include<algorithm>
using namespace std;
int h,s=0,rgb[1000][3];
int main(){
    scanf("%d",&h);
    for(int i=0;i<h;i++){
        int n[3];
        scanf("%d %d %d",&rgb[i][0],&rgb[i][1],&rgb[i][2]);
    }
    int r0=rgb[0][0],g0=rgb[0][1],b0=rgb[0][2];
    int r,g,b;
    for(int i=1;i<h;i++){
        r=rgb[i][0]+min(g0,b0);
        g=rgb[i][1]+min(r0,b0);
        b=rgb[i][2]+min(r0,g0);
        r0=r;
        g0=g;
        b0=b;
    }
    printf("%d",min(r,min(g,b)));
}
