#include<stdio.h>
int main(){
	int l,n,m=1,g=0;
	int a[3]={0};
	scanf("%d %d",&l,&n);
	for(g=0 ; g<3 ; g++){
		a[g]=n/m%10;
		m=m*10;
	}
	for(int i=0 ; i<=2 ;i++){
		printf("%d\n",l*a[i]);
	}
	printf("%d",l*n);
	
}
