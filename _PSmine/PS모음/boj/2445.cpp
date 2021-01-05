#include<stdio.h>
int main() {
	int n,a,b,c,d;
	scanf("%d",&n);
	for(int i=1; i<2*n; i++) {
		a=1;
		b=1;
		if(i<=n) {
			while(a<=i) {
				printf("*");
				a++;
			}
			while(b<=2*n-2*i) {
				printf(" ");
				b++;
			}
			a=1;
			while(a<=i) {
				printf("*");
				a++;
			}
			printf("\n");
		} else {
			while(a<=2*n-i) {
				printf("*");
				a++;
			}
			while(b<=2*n-2*(n*2-i)) {
				printf(" ");
				b++;
			}
			a=1;
			while(a<=2*n-i) {
				printf("*");
				a++;
			}
			if(i==2*n-1){
				break;
			}
			printf("\n");
		}
	}
}
