#include<stdio.h>
int n,num[1000001],m,a,b;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&num[i]);
    }
    for(int i=1;i<=n;i++){
        num[i]+=num[i-1];
    }
    for(int i=1;i<=m;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",num[b]-num[a-1]);
    }
}
