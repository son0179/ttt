#include            <stdio.h>
int main(){
	int n,m,tmp;
	scanf("%d %d",&n,&m);
	
	while(n>0&&m>0){
		tmp=n;
		n=m%n;
		m=tmp;
	}
	printf("%d",n+m);
}
