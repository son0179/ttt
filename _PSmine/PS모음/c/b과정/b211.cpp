#include<stdio.h>
int main(){
	int top=0,end,push,pop,stack[6]={0},n;
	do{
		printf("0:End 1:Push 2:Pop\n");
		scanf("%d",&n);
		if(n==1){
			if(top==5){
				printf("overflow\n");
			}
			else{
				top++;
				scanf("%d",&stack[top]);		
			}			
		}
		if(n==2){
			if(top==0){
				printf("underflow\n");
			}
			else{
				printf("%d\n",stack[top]);
				top--;
			}		
		}
	}while(n!=0);
}
