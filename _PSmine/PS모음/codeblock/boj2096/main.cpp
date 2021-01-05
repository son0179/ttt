#include<stdio.h>
#include<algorithm>
using namespace std;
int n,a,b,c,kmax[3][2],kmin[3][2];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        kmax[0][1]=max(kmax[0][0],kmax[1][0])+a;
        kmax[1][1]=max(kmax[0][0],max(kmax[1][0],kmax[2][0]))+b;
        kmax[2][1]=max(kmax[1][0],kmax[2][0])+c;

        kmin[0][1]=min(kmin[0][0],kmin[1][0])+a;
        kmin[1][1]=min(kmin[0][0],min(kmin[1][0],kmin[2][0]))+b;
        kmin[2][1]=min(kmin[1][0],kmin[2][0])+c;

        kmax[0][0]=kmax[0][1];
        kmax[1][0]=kmax[1][1];
        kmax[2][0]=kmax[2][1];

        kmin[0][0]=kmin[0][1];
        kmin[1][0]=kmin[1][1];
        kmin[2][0]=kmin[2][1];
    }
    printf("%d %d",max(kmax[0][0],max(kmax[1][0],kmax[2][0])),min(kmin[0][0],min(kmin[1][0],kmin[2][0])));
}
