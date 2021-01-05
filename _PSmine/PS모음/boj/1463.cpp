#include<stdio.h>
int t=99999999;
int f(int n,int time){
	if(time<t&&n!=1){
		if(n%3==0){
			f(n/3,time+1);
		}
		if(n%2==0){
			f(n/2,time+1);
		}
		f(n-1,time+1);
	}
	else{
		if(t>time){
			t=time;
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	f(n,0);
	printf("%d",t);
}
