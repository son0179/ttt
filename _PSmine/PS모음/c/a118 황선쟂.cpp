#include<stdio.h>
int main(){
	
	int i,n,s,c;
	s=0;
	c=0;
	for(i=1;i<11;i=i+1){
		scanf("%d",&n);
		if (n>0){
			c++;
			s=s+n;
		}
	}
	printf("%f",(float)s/c);
}
