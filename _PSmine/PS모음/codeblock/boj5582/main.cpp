#include<stdio.h>
#include<algorithm>
using namespace std;
char a[5000],b[5000];
int i,j,k[5000][5000];
int main(){
    scanf("%s",a);
    scanf("%s",b);
    for(i=1;a[i-1]!='\0';i++){
        for(j=1;b[j-1]!='\0';j++){
            if(a[i-1]==b[j-1]){
                k[i][j]=k[i-1][j-1]+1;
            }
            else{
                k[i][j]=max(k[i-1][j],k[i][j-1]);
            }
        }
    }
    printf("%d",k[i-1][j-1]);
}
