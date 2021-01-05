#include<stdio.h>
int n,x[200][200],v[200];
void dfs(int i,int j){
    for(int k=0;k<n;k++){
        if(x[i][k]&&v[k]==0){
            v[k]=1;
            x[j][k]=1;
            dfs(k,j);
        }
    }
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&x[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                v[j]=0;
        }
        dfs(i,i);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
}
