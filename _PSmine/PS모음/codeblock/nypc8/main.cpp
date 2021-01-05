#include<stdio.h>
#include<algorithm>
using namespace std;
pair <int,pair<int,int> > k[80000];
int n,maax,a[500],b[500],c[500],s[500],index;
int main(){
    scanf("%d",&n);

    if(n==1){
        scanf("%2d:%2d:%2d",&a[30],&b[33],&c[45]);
        printf("0");
        return 0;
    }

    for(int i=0;i<n;i++){
        scanf("%2d:%2d:%2d",&a[i],&b[i],&c[i]);
        s[i]=a[i]*6000+b[i]*100+c[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            k[index].first=s[i]+s[j];
            k[index].second.first=i;
            k[index].second.second=j;
            index++;
        }
    }

    sort(k,k+index);

    for(int i=0;i<index;i++){
        int tmp=1,ch[500];
        for(int j=0;j<n;j++){
            ch[j]=0;
        }
        ch[k[i].second.first]++;
        ch[k[i].second.second]++;
        for(int j=i+1;j<index;j++){
            if(k[j].first-k[i].first<1000){
                if(ch[k[j].second.first]==0 && ch[k[j].second.second]==0){
                    tmp++;
                    ch[k[j].second.second]++;
                    ch[k[j].second.first]++;
                }
            }
            else{
                break;
            }
        }
        if(tmp>maax){
            maax=tmp;
        }

    }

    printf("%d",maax);
}
