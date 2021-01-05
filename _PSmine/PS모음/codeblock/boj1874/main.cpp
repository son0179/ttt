#include<stdio.h>
#include<stack>
using namespace std;
stack <int> st;
int n,m[110000],num,index,ind;
char c[210000];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&m[i]);
    }
    num=1;
    ind=1;
    while(num<=n){
        if(!st.empty()&&st.top()==m[ind]){
            st.pop();
            c[index]='-';
            index++;
            ind++;
        }
        else{
            if(num>m[ind]){
                printf("NO");
                return 0;
            }
            st.push(num);
            num++;
            c[index]='+';
            index++;
        }
    }
    while(!st.empty()){
        if(st.top()!=m[ind]){
            printf("NO");
            return 0;
        }
        ind++;
        c[index]='-';
        index++;
        st.pop();
    }

    for(int i=0;i<index;i++){
        printf("%c\n",c[i]);
    }
}
