#include<stdio.h>
int main(){
	int n,m,a[3]={0},i,j,tmp;
	scanf("%d %d",&n,&m);
	tmp=m;
	for(i=0 ; m>0 ; i++){
		a[i]=m%10;
		m=m/10;
	}
	for(j=0; j<i ; j++){
		printf("%d\n",a[j]*n);
	}
	printf("%d",tmp*n);
}
