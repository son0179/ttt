#include<stdio.h>
int a[5]={100,50,10,5,1};

int f(int n,int j){
	if(j<5){
		printf("%d ",n/a[j]);
		n=n%a[j];
		j++;
		f(n,j);
	}
}
int main(){
	int n;
	scanf("%d",&n);
    f(n,0);
}
