#include<stdio.h>
int main(){
	int m,n,a=0,d=0,q,w;
	for(m=1;m<999;m++){
		n=m+2;
		for(q=1;q<=n;q++){
			if(n%q==0){
			d=d+1;
			}	
		}
		for(w=1;w<=m;w++){
			if(m%w==0){			
			a=a+1;
			}
		}								
		if(a==2&&d==2){
				printf("%d %d \n",m,n);
		}
		d=0;
		a=0;
		
	}
}

