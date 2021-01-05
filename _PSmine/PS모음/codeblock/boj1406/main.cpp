#include<stdio.h>
#include<stack>
using namespace std;
stack <char> l;
stack <char> r;
stack <char> print;
char n[150000],tmp;
int m;
int main(){
    scanf("%s%d",n,&m);
    for(int i=0;n[i]!='\0';i++){
        l.push(n[i]);
    }
    for(int i=0;i<m;i++){
        scanf(" %c",&tmp);
        if(tmp=='L'){
            if(!l.empty()){
                r.push(l.top());
                l.pop();
            }
        }
        else if(tmp=='D'){
            if(!r.empty()){
                l.push(r.top());
                r.pop();
            }
        }
        else if(tmp=='B'){
            if(!l.empty()) l.pop();
        }
        else{
            char t;
            scanf(" %c",&t);
            l.push(t);
        }
    }
    while(!l.empty()){
        print.push(l.top());
        l.pop();
    }
    while(!print.empty()){
        printf("%c",print.top());
        print.pop();
    }
    while(!r.empty()){
        printf("%c",r.top());
        r.pop();
    }
}
