#include<stdio.h>
int main(){
	int n,c;
	scanf("%d",&n);
	int b=0;
	for(int i=1;i<n+1;i++){
		c=1;
		b=1;
		while(b<=n-i){
			printf(" ");
			b++;
		}
		while(c<=i*2-1){
			printf("*");
			c++;
		}
		b=1;
		while(b<=n-i){
			printf(" ");
			b++;
		}
		if(i==n){
			break;
		}
		printf("\n");
	}
}

