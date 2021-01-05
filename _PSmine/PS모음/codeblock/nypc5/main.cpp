#include<stdio.h>
#define X 1100
#define Y 11000
int n,k,m[Y],a[X][Y],lt[X],c[X],cnt;
int main(){
    scanf("%d",&n);
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        scanf("%d",&m[i]);
    }
    c[m[1]]=1;
    cnt++;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(m[j]==i){
                a[i][j]=a[i][j-1]+1;
            }
            else{
                a[i][j]=a[i][j-1];
            }
        }
    }
    for(int i=1;i<=k;i++){
        if(lt[m[i]]==0){
            lt[m[i]]=i;
        }
        else{
            int flag=0;
            for(int j=1;j<=n;j++){
                if(j!=m[i]&&a[j][i]-a[j][lt[m[i]]]>=2){
                    flag=1;
                    break;
                }
            }
            if(flag==0&&c[m[i]]!=1){
                c[m[i]]=1;
                cnt++;
            }
            lt[m[i]]=i;
        }
    }
    printf("%d\n",cnt);
    for(int i=1;i<=n;i++){
        if(c[i]==1){
            printf("%d ",i);
        }
    }
}
