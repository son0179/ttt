#include<stdio.h>
int main(){
	int n,s=0,i; 
	for(i=1;i<=10;i++){
		for(n=1;n<=i;n++){
			s=s+n;
		}
	}
	printf("%d",s);
}
