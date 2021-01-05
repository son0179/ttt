#include<stdio.h>
#include<stack>
using namespace std;
stack <char> st;
int main(){
    char a[1000000];
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++){
        st.push(a[i]);
    }
    while(!st.empty()){
        printf("%c",st.top());
        st.pop();
    }
}
