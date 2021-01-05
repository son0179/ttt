#include<stdio.h>
#include<algorithm>
using namespace std;
int n,a,b,small[10000],sc,big[10000],bc;
long long s;
int main(){
    scanf("%d %d %d",&n,&a,&b);
    for(int i=0;i<a;i++){
        scanf("%d",&small[i]);
        sc++;
    }
    sort(small,small+sc);
    sc--;
    for(int i=0;i<b;i++){
        scanf("%d",&big[i]);
        bc++;
    }
    sort(big,big+bc);
    bc--;
    for(int i=0;i<n;i++){
        if((n-i)%2==1){
            s+=small[sc];
            sc--;
        }
        else if(sc==-1){
            s+=big[bc];
            i++;
            bc--;
        }
        else if(bc==-1){
            s+=small[sc];
            sc--;
        }
        else{
            if(sc>=1&&small[sc]+small[sc-1]>=big[bc]){
                s+=small[sc]+small[sc-1];
                i++;
                sc-=2;
            }
            else{
                s+=big[bc];
                i++;
                bc--;
            }
        }
    }
    printf("%lld",s);
}
