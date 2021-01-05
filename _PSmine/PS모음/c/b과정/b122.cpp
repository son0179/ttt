#include<stdio.h>
int a[5]={100,50,10,5,1};

int f(int n,int m){
	if(m<5){
		printf("%d",n/a[m]);
		f(n%a[m],m+1);
		
	}
} 
int main(){

	int n;
	scanf("%d",&n);
	f(n,0);
}
