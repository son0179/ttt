#include<stdio.h>
#include<queue>
using namespace std;
queue <int> q1[32100];
priority_queue <int> q2;
int n,m,a[110000][2],b[32100];
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d %d",&a[i][0],&a[i][1]);
        q1[a[i][0]].push(a[i][1]);
        b[a[i][1]]++;
    }
    for(int i=1;i<=n;i++){
        if(b[i]==0){
            q2.push(-i);
        }
    }
    while(!q2.empty()){
        printf("%d ",-q2.top());
        while(!q1[-q2.top()].empty()){
            b[q1[-q2.top()].front()]--;
            if(b[q1[-q2.top()].front()]==0){
                q2.push(-q1[-q2.top()].front());
            }
            q1[-q2.top()].pop();
        }
        q2.pop();
    }
}
