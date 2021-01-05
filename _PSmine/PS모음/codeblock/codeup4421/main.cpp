#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m[100][100],l[1000],h=0,v[100][100];
char a[100][100];
void dfs(int i,int j){
    h++;
    v[i][j]=0;
    if(m[i+1][j]==1&&v[i+1][j]==1){
        dfs(i+1,j);
    }
    if(m[i-1][j]==1&&v[i-1][j]==1){
        dfs(i-1,j);
    }
    if(m[i][j+1]==1&&v[i][j+1]==1){
        dfs(i,j+1);
    }
    if(m[i][j-1]==1&&v[i][j-1]==1){
        dfs(i,j-1);
    }
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s",a[i]);
        for(int j=1;j<=n;j++){
            m[i][j]=(int)a[i][j-1]-'0';
            v[i][j]=1;
        }
    }
    int p=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(m[i][j]==1&&v[i][j]==1){
                p++;
                h=0;
                dfs(i,j);
                l[p]=h;
            }
        }
    }
    sort(l+1,l+p+1);
    printf("%d\n",p);
    for(int i=1;i<=p;i++){
        printf("%d\n",l[i]);
    }
}
