#include<stdio.h>
#include<queue>
using namespace std;
int cnt,n,k;
queue <int> q1;
queue <int> q2;
int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        q1.push(i);
    }
    cnt=1;
    printf("<");
    while(!q1.empty()||!q2.empty()){
        while(!q1.empty()){
            if(cnt%k==0){
                cnt=1;
                if(q2.size()==0&&q1.size()==1){
                    printf("%d>",q1.front());
                    return 0;
                }
                printf("%d, ",q1.front());
                q1.pop();
            }
            else{
                q2.push(q1.front());
                q1.pop();
                cnt++;
            }
        }
        while(!q2.empty()){
            if(cnt%k==0){
                cnt=1;
                if(q1.size()==0&&q2.size()==1){
                    printf("%d>",q2.front());
                    return 0;
                }
                printf("%d, ",q2.front());
                q2.pop();
            }
            else{
                q1.push(q2.front());
                q2.pop();
                cnt++;
            }
        }
    }
}
