#include<stdio.h>
//#include<stack>
//using namespace std;
//stack <int> st;
#define N 1000000007
long long int dp[500];
int main(){
    long long n,k,x=1,cnt=1 ;
    scanf("%lld %lld",&n,&k);
    dp[1]=n;
    dp[0]=1;
    for(int i=2;i<=400;i++){
        dp[i]=dp[i-1]*dp[i-1];
        dp[i]%=N;
    }

    while(k>0){
        if(k%2==1){
            x=(x*dp[cnt])%N;
        }
        //st.push(k%2);
        //printf("%d ", dp[cnt]);
        cnt++;
        k=k/2;
    }
    //printf("\n");
    printf("%lld\n",x);

    //while(!st.empty()){
    //    printf("%d", st.top());
    //    st.pop();
    //}
}
