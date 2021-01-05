#include<stdio.h>
#include<algorithm>
using namespace std;
int i,j,k,x,y,z,candy[100][3],n;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&candy[i][0]);
        scanf("%d",&candy[i][1]);
        scanf("%d",&candy[i][2]);
    }
    for(int i=0;i<n;i++){
        i=candy[i][0]+max(y,z);
        j=candy[i][1]+max(x,z);
        k=candy[i][2]+max(y,x);
    }
    printf("%d",max(i,max(j,k)));
}
