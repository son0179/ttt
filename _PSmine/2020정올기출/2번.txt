#include<stdio.h>
#include<algorithm>
#include<queue>
using namespace std;
queue <int> q[6];
int t,n,v[10100000];
int main(){

	scanf("%d",&t);
	for(int p=0;p<t;p++){
		scanf("%d",&n);
		for(int i=0;i<10100000;i++){
			v[i]=-1;
		}
		v[0]=1;
		q[0].push(0);
		q[1].push(0);
		q[2].push(0);
		q[3].push(0);
		q[4].push(0);
		q[5].push(0);
		while(!q[0].empty()){
			int tmp1=q[0].front(),tmp2=q[1].front(),tmp3=q[2].front(),tmp4=q[3].front(),tmp5=q[4].front(),tmp6=q[5].front();
			if(tmp1==n){
				printf("%d %d %d %d %d\n",q[1].front(),q[2].front(),q[3].front(),q[4].front(),q[5].front());
				break;
			}
			q[0].pop();
			if(tmp1-1>0&&v[tmp1-1]!=1){
				v[tmp1-1]=1;
				q[0].push(tmp1-1);
				q[5].push(q[5].front()+1);
				q[1].push(tmp2);
				q[2].push(tmp3);
				q[3].push(tmp4);
				q[4].push(tmp5);
			}
			if(tmp1+1<10100000&&v[tmp1+1]!=1){
				v[tmp1+1]=1;
				q[0].push(tmp1+1);
				q[4].push(q[4].front()+1);
				q[1].push(tmp2);
				q[2].push(tmp3);
				q[3].push(tmp4);
				q[5].push(tmp6);

			}


			if(tmp1-10>0&&v[tmp1-10]!=1){
				v[tmp1-10]=1;
				q[0].push(tmp1-10);
				q[3].push(q[3].front()+1);
				q[1].push(tmp2);
				q[2].push(tmp3);
				q[4].push(tmp5);
				q[5].push(tmp6);
			}
			if(tmp1+10<10100000&&v[tmp1+10]!=1){
				v[tmp1+10]=1;
				q[0].push(tmp1+10);
				q[2].push(q[2].front()+1);
				q[1].push(tmp2);
				q[3].push(tmp4);
				q[4].push(tmp5);
				q[5].push(tmp6);
			}
			if(tmp1+60<10100000&&v[tmp1+60]!=1){
				v[tmp1+60]=1;
				q[0].push(tmp1+60);
				q[1].push(q[1].front()+1);
				q[2].push(tmp3);
				q[3].push(tmp4);
				q[4].push(tmp5);
				q[5].push(tmp6);
			}
			q[1].pop();
			q[2].pop();
			q[3].pop();
			q[4].pop();
			q[5].pop();
		}
		while(!q[0].empty()){
			q[0].pop();
			q[1].pop();
			q[2].pop();
			q[3].pop();
			q[4].pop();
			q[5].pop();
		}
	}
}
