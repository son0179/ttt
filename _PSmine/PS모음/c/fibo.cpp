#include<stdio.h>
int check[100]={0};
unsigned long long value[100]={0};
unsigned long long f(int n){
	if(check[n]==0){
		if (n<=2){
			check[n]=1;
			value[n]=1;
			return 1;
		}
		else{
			check[n]=1;
			value[n]=f(n-1)+f(n-2);
			return value[n];
		}
		
	}
	else{
		return value[n];
	}
}
int main(){
	int m;
	scanf("%d",&m);
	printf("%llu",f(m));
}
