#include<stdio.h>
int main(){
	int q[101]={0},tail=0,head=0,n;
	do{
		printf("0:End 1:Input 2:Output\n");
		scanf("%d",&n);
		if(n==1){
			tail++;
			scanf("%d",&q[tail]);
		}
		if(n==2){
			if(tail==head){
				printf("Underflow");
			}
			else{
				head++;				
			}

		}
		if(n!=0){
	        for(int i=head;i<tail;i++){
	        	printf("%d ",q[i+1]);
			}
			printf("\n");
		}

	}while(n!=0);
}
