#include<stdio.h>
#include<queue>
using namespace std;
queue <int> q1[40000];
queue <int> q2;
int a,b,n,m,k[40000];
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        q1[a].push(b);
        k[b]++;
    }
    for(int i=1;i<=n;i++){
        if(k[i]==0){
            q2.push(i);
        }
    }
    while(!q2.empty()){
        int tmp=q2.front();
        printf("%d ",tmp);
        q2.pop();
        while(!q1[tmp].empty()){
            k[q1[tmp].front()]--;
            if(k[q1[tmp].front()]==0){
                q2.push(q1[tmp].front());
            }
            q1[tmp].pop();
        }
    }
}
