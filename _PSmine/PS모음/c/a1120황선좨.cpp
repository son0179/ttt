#include<stdio.h>
int main(){
	int s=0;
	int n=100;
	while(n!=0){
		scanf("%d",&n);
		if(n>0){
			s=s+n;
		}
	}
		printf("%d",s);
}
