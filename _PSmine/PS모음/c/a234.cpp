#include<stdio.h>
int main(){
	int ch[1001]={0};
	int m,n,a=0,d=0,q,w;
	for(m=1;m<999;m++){
		n=m+2;
		if(ch[n]==0){
			for(q=1;q<=n/2;q++){
				if(n%q==0){
					ch[n]=ch[n]+1;
				}	
			}
		}
		if(ch[m]==0){
			for(w=1;w<=m/2;w++){
				if(m%w==0){			
					ch[m]=ch[m]+1;
				}
			}
		}	
											
		if(ch[n]==1&&ch[m]==1){
			
			printf("%d %d \n",m,n);

		}
		d=0;
		a=0;
		
	}
}
