#include<stdio.h>
int main() {
	int n,a,b;
	scanf("%d",&n);
	if(n==1) {
		printf("*");
	} else {
		for(int i=1; i<n; i++) {
			a=1;
			b=1;
			while(a<=n-i) {
				printf(" ");
				a++;
			}
			printf("*");
			if(i!=1) {
				while(b<=(i-1)*2-1) {
					printf(" ");
					b++;
				}
				printf("*");
			}
			printf("\n");
		}
		for(int i=1; i<n*2; i++) {
			printf("*");
		}
	}
}
