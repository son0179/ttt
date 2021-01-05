#include<stdio.h>
#include<algorithm>
using namespace std;
int x;
pair <int,int> a[10001000];
int main(){
    int line=1,n=1,m=1,tmp=0;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        a[i].first=n;
        a[i].second=m;
        if(i-tmp==line){
            tmp=i;
            line++;
            if(line%2==0){
                n=1;
                m=line;
            }
            else{
                n=line;
                m=1;
            }
        }
        else{
            if(line%2==0){
                n++;
                m--;
            }
            else{
                n--;
                m++;
            }
        }
    }
    printf("%d/%d",a[x].first,a[x].second);
}
