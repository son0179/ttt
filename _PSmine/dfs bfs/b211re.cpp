#include<stdio.h>
int main(){
	int stack[6]={0},top=0,n;
	do{
		printf("0:End 1:Push 2:Pop\n");
		scanf("%d",&n);
		if(n==1){
			if(top==5){
				printf("Overflow\n");
			}	
			else{
				scanf("%d",&stack[top]);
				top++;
			}
		}
		if(n==2){
			if(top==0){
				printf("Underflow\n");
        	}
        	else{
                top--;
			}
		}
		if(n!=0){
			for(int i=0;i<top;i++){
				printf("%d ",stack[i]);
			}
			printf("\n");
		}

	}while(n!=0);
}
