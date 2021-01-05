#include<stdio.h>
int main(){
	int n,m,d=0,q;
	scanf("%d",&n);
	for(m=2;m<=n;m++){
		while(n%m==0){
			printf("%-03d\n",m);
			n=n/m;
		}
	}
}

