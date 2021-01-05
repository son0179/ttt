#include<stdio.h>
#include<algorithm>
using namespace std;
int t,n,d[2][150000],dt[2][150000];
int main(){
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        n+=2;
        for(int j=0;j<2;j++){
            for(int k=0;k<n;k++){
                dt[j][k]=0;
            }
        }
        for(int j=0;j<2;j++){
            for(int k=2;k<n;k++){
                scanf("%d",&d[j][k]);
            }
        }
        for(int k=2;k<n;k++){
            for(int j=0;j<2;j++){
                dt[j][k]=d[j][k]+max(dt[(j+1)%2][k-1],dt[(j+1)%2][k-2]);
            }
        }

        printf("%d\n",max(dt[0][n-1],dt[1][n-1]));


    }
}
