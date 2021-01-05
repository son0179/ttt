#include<stdio.h>
#include<algorithm>
using namespace std;
pair <double,double> d[300001];
double a,b,k1[300001][2],k2[300001][2],p[300001],q[300001];
int n;
int cnt;
int main(){
    scanf("%d %lf %lf",&n,&a,&b);
    for(int i=0;i<n;i++){
        scanf("%lf %lf",&d[i].second,&d[i].first);
    }
    sort(d,d+n);
    for(int i=0;i<n;i++){
        p[i]=d[i].second;
        q[i]=d[i].first;
        if(p[i]!=a){
            k1[i][0]=q[i]/(p[i]-a);
            k1[i][1]=-a*k1[i][0];

        }
        if(q[i]!=b){
            k2[i][0]=q[i]/(p[i]-b);
            k2[i][1]=-b*k2[i][0];
        }
    }
    for(int i=0;i<n;i++){
        int ch=1;
        for(int j=0;j<i;j++){
            if(p[i]==a&&p[j]!=a&&p[j]!=b){
                if(a<=p[j]&&p[j]<=(q[j]-k2[i][1])/k2[i][0]){
                    ch--;
                    break;
                }
            }
            else if(p[i]==b&&p[j]!=a&&p[j]!=b){
                if((q[j]-k1[i][1])/k1[i][0]<=p[j]&&p[j]<=b){
                    ch--;
                    break;
                }
            }
            else if(p[j]!=a&&p[j]!=b){
                if((q[j]-k1[i][1])/k1[i][0]<p[j]&&p[j]<(q[j]-k2[i][1])/k2[i][0]){
                    ch--;
                    break;
                }
            }

        }
        cnt+=ch;
    }
    printf("%d",cnt);
}
