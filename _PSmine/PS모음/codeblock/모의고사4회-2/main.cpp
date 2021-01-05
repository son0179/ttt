#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m,a[300000],b[300000],s;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    sort(b,b+m);
    for(int i=0;i<n;i++){
        if(*lower_bound(b,b+m,a[i])==a[i]){
            for(int j=(int)(*lower_bound(b,b+m,a[i]));j<m;j++){
                if(b[j]==a[i]){
                    s++;
                    printf("%d ",s);

                }
                else{
                    break;
                }
            }
        }
    }
    for(int i=0;i<m;i++){
        if(*lower_bound(a,a+n,b[i])==b[i]){
            for(int j=(int)(*lower_bound(a,a+n,b[i]));j<n;j++){
                if(b[i]==a[j]){
                    s++;
                    printf("%d ",s);

                }
                else{
                    break;
                }
            }
        }
    }
    printf("%d",s);
}
