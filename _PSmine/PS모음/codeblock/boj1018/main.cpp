#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m,chess[100][100],a[10000],index;
char tmp[100];
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%s",tmp);
        for(int j=0;j<m;j++){
            if(tmp[j]=='W'){
                chess[i][j]=0;
            }
            else{
                chess[i][j]=1;
            }
        }
    }
    for(int i=0;i<=n-8;i++){
        for(int j=0;j<=m-8;j++){
            for(int x=i;x<i+8;x++){
                for(int y=j;y<j+8;y++){
                    if(chess[x][y]!=(x+y)%2){
                        a[index]++;
                    }
                }
            }
            index++;
            for(int x=i;x<i+8;x++){
                for(int y=j;y<j+8;y++){
                    if(chess[x][y]==(x+y)%2){
                        a[index]++;
                    }
                }
            }
            index++;
        }
    }
    sort(a,a+index);
    printf("%d",a[0]);
}
