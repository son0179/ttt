//µÈ¡„¿« ≈ª√‚
#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m,s,v,cnt,b[1000],c[1000];
double rat[1000][2],tunnel[1000][2],a[1000][1000];
int main(){
    scanf("%d %d %d %d",&n,&m,&s,&v);
    s*=s;
    v*=v;
    for(int i=0;i<n;i++){
        scanf("%lf %lf",&rat[i][0],&rat[i][1]);
        b[i]=-1;
    }
    for(int i=0;i<m;i++){
        scanf("%lf %lf",&tunnel[i][0],&tunnel[i][1]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=(rat[i][0]-tunnel[j][0])*(rat[i][0]-tunnel[j][0])+(rat[i][1]-tunnel[j][1])*(rat[i][1]-tunnel[j][1]);
        }
        int minimum=2100000000;
        for(int j=0;j<m;j++){
            if(a[i][j]/v<=s){
                if(c[j]==0){
                    b[i]=j;
                }
            }
        }
        if(b[i]>=0){
            cnt++;
            c[b[i]]++;
        }
    }
    printf("%d",cnt);
}
