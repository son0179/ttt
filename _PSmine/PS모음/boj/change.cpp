#include<stdio.h>
void f(int a,int b){
	int tmp=a;
	a=b;
	b=tmp;
}
int main(){
	int n=5;
	int m=7;
	printf("%d %d\n",n,m);
	f(n,m);
	printf("%d %d",n,m);
}
