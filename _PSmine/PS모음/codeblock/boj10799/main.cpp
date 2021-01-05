#include<stdio.h>
#include<stack>
using namespace std;
stack <int> st;
int main(){
    char a[100010],b='0';
    int c=0,d=0;
    scanf("%s",a);
    while(a[c]!='\0'){
        if(a[c]=='('){
            st.push(a[c]);
            b='(';
        }
        else{
            if(b=='('){
                st.pop();
                d+=st.size();
            }
            else{
                st.pop();
                d++;
            }
            b=')';
        }
        c++;
    }
    printf("%d",d);
}
