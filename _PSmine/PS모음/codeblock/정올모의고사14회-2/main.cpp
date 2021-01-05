#include<stdio.h>
#include<algorithm>
#include<queue>
using namespace std;
int t,n,m,a[1000],c[10000];
queue <int> q[2];
int main(){
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&m);
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
            q[0].push(a[j]);
            q[1].push(j);
            c[j]=0;
        }
        int cnt=0,ch=0;
        while(1){
            ch=0;
            for(int j=0;j<n;j++){
                if(c[j]==0){
                    if(a[j]>q[0].front()){

                        ch=1;

                        break;
                    }
                }

            }
            if(ch==0){
                cnt++;
                if(q[1].front()==m){
                    printf("%d\n",cnt);
                    break;
                }
                else{
                    c[q[1].front()]++;
                    q[1].pop();
                    q[0].pop();
                }
            }
            else{
                q[0].push(q[0].front());
                q[1].push(q[1].front());
                q[1].pop();
                q[0].pop();
            }
        }
        while(!q[0].empty()){
            q[0].pop();
            q[1].pop();
        }
    }
}
