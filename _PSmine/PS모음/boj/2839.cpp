#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<=n/3;i++){
		if((n-i*3)%5==0){
			printf("%d",(i+(n-i*3)/5));
			break;
		}
	}
	printf("-1");
}
