#include<stdio.h>
#include<algorithm>
#include<stack>
using namespace std;
stack <char> st;
int main(){
	int n,s=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char a[100000];
		scanf("%s",a);
		for(int  i=0;a[i]!='\0';i++){
			if(st.empty()){
                st.push(a[i]);
			}
			else{
                if(st.top()==a[i]){
                    st.pop();
                }
                else{
                    st.push(a[i]);
                }
			}
		}
		s+=st.empty();
		while(st.empty()!=1){
            st.pop();
		}
	}
	printf("%d",s);
}
