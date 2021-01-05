#include<stdio.h>
#include<stack>
using namespace std;
stack <int> st[10];
int main(){
    int n,p,a,b,cnt=0;
    scanf("%d %d",&n,&p);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(st[a].empty()==1){
            st[a].push(b);
            cnt++;

        }
        else if(st[a].top()<b){
            st[a].push(b);
            cnt++;
        }
        else if(st[a].top()>b){
            while(!st[a].empty()&&st[a].top()>b){
                st[a].pop();
                cnt++;
            }
            if(!st[a].empty()){
                if(st[a].top()!=b){
                    st[a].push(b);
                    cnt++;
                }
            }
            else{
                st[a].push(b);
                cnt++;
            }
        }
    }
    printf("%d",cnt);
}
