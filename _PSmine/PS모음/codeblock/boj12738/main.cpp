#include<stdio.h>
#include<algorithm>
using namespace std;
int n,a[1100000],lis[1100000],index;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    lis[index]=a[0];
    index++;
    for(int i=1;i<n;i++){
        if(lis[index-1]>=a[i]){
            lis[(int)(lower_bound(lis,lis+index,a[i])-lis)]=a[i];
        }
        else{
            lis[index]=a[i];
            index++;
        }
    }
    printf("%d",index);
}
