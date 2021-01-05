#include<stdio.h>
int n,m,nn[300][300],mm[2000],c,parent[300];
int findparent(int x){
    if(parent[x]==x){
        return x;
    }
    else{
        return parent[x]=findparent(parent[x]);
    }
}
void Union(int x,int y){
    x=findparent(x);
    y=findparent(y);
    if(x!=y){
        parent[y]=x;
    }
    return;
}
int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&nn[i][j]);
        }
    }
    for(int i=1;i<=m;i++){
        scanf("%d",&mm[i]);
    }
    for(int i=1;i<=n;i++){
        parent[i]=i;
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(nn[i][j]==1){
                Union(i,j);
            }
        }
    }

    for(int i=1;i<m;i++){
        if(findparent(mm[i])!=findparent(mm[i+1])){
            printf("NO");
            return 0;
        }
    }
    printf("YES");

}
