#include<stdio.h>
int main(){
	int n,a,b,s=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		s+=(b%a);
	}
	printf("%d",s);
}
