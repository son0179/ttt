#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m[1000003],k[1000003];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m[i]);
    }
    int cnt=0;
    for(int i=1;i<n;i++){
        if(m[i]<k[cnt])
        k[(int)lower_bound(k,k+n+1,m[i])]=m[i];
        else{

            cnt++;
            k[cnt]=m[i];
        }
    }
    printf("%d",cnt+1);
}
