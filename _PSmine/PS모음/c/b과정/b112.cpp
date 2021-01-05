#include<stdio.h>
int f(int n){
	if(n>1){
		return n*f(n-1);	
	}

}
int main(){
	int x;
	scanf("%d",&x);
	printf("%d",f(x));
}
