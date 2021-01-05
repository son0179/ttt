#include<stdio.h>
int main(){
	int n;
	int i;
	int a[10000]={0};
	scanf("%d",&n);
	for(i=0;n>0;i++){
		a[i]=n%2;
		n=n/2;
	}
	for(i--;i>=0;i--){
		printf("%d",a[i]);
	}
}
