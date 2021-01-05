#include<stdio.h>
int main(){
    int n,m[1000],a,b=-1;
    scanf("%d %d",&n,&a);
    for(int i=0;i<n;i++){
        scanf("%d",&m[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(m[i]+m[j]+m[k]<=a&&m[i]+m[j]+m[k]>=b) b=m[i]+m[j]+m[k];
            }
        }
    }
    printf("%d",b);
}
