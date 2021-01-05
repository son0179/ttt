#include<stdio.h>
int main(){
	int n,q[101]={0},tail=0,head=0;
	do{
		printf("0:End 1:Input 2:Output ");
		scanf("%d",&n);
		if(n==1){
			if(tail>100){
				printf("overflow");
			}
			else{
				tail++;
				scanf("%d",&q[tail]);
			}
		}
		if(n==2){
			if(tail==head){
				printf("Underflow");
			}
			else{
				head++;
				printf("%d",q[head]);
			}
		}
	}while(n!=0);
}
