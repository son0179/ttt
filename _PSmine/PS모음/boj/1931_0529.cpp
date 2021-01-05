#include<stdio.h>
#include<stdlib.h>
struct con {
	int st;
	int ed;
};
int compare(const void *a,const void *b){
	con * ta=(con*)a;
	con * tb=(con*)b;
	if((*ta).ed < (*tb).ed){
		return -1;
	}
	else if((*ta).ed > (*tb).ed){
		return 1;
	}
	else if((*ta).st < (*tb).st){
		return -1;
	}
	else{
		return 1;
	}
}
int main() {
	struct con m[100000];
	int n,answeeeeeeeeeeeeer=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%d %d",&m[i].st,&m[i].ed);
	}
	qsort(m,n,sizeof(con),compare);
	int t=0;
	for(int i=0;i<n;i++){
		if(m[i].st>=t){
			t=m[i].ed;
			answeeeeeeeeeeeeer++;
		}
	}
	printf("%d",answeeeeeeeeeeeeer);
}
