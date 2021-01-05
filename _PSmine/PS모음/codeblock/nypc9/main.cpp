#include<stdio.h>
#include<algorithm>
using namespace std;
int d[6000], s[6000];
int main(){
    int x, r, n;
    scanf("%d %d %d", &x, &r, &n);
    for(int i=1;i<=n;i++){
        scanf("%d %d", &d[i], &s[i]);
    }
    if(n>=6000) return 0;
    for(int i=0;i<4000;i++){
        int k[6000];
        for(int j=1;j<=n;j++){
            k[j]=d[j]+i*s[j];
        }

        sort(k+1, k+n+1);

        if(k[n]-k[1]<=r&&k[1]<=x&&k[1]>=0){
            printf("T");
            return 0;
        }
    }
    printf("F");
}
