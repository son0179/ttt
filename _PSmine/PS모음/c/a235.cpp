#include<stdio.h>
int main(){
	int n,m,d=0,q;
	scanf("%d",&n);
	for(q=1;q<=n;q++){
		if(n%q==0){
			d=d+1;
		}
	}
	while(d>2){
		for(m=2;m<n/2+1;m++){
			if(n%m==0){
				printf("%d\n",m);
				n=n/m;
				d=0;
				for(q=1;q<=n;q++){
					if(n%q==0){
						d=d+1;
					}
				}
			}
		}
	}
}

