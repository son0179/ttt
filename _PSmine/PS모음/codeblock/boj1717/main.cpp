#include<stdio.h>
int n,m,parent[1100000];
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
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        parent[i]=i;
    }
    for(int i=1;i<=m;i++){
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        if(x==0){
            Union(y,z);
        }
        else{
            if(findparent(y)==findparent(z)){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
}
