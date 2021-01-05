#include<stdio.h>
int main(){
	int n,m,d=0;
	scanf("%d",&n);
	for(m=1;m<=n;m++){
		if(n%m==0){
			
			d=d+1;
		}
		
	}
	if(d==2){
		printf("Yes");
	}
	else{
		printf("No");
	}
}
