#include<stdio.h>
int time=0;
int f(int n){
	if(n!=1){
		if(n%3==0){
			time++;
			f(n/3);
		}
		if(n%2==0){
			time++;
			f(n/2);
		}
		time++;
		f(n-1);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	f(n);
	printf("%d",time);
}
