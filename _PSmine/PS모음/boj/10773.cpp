#include<stdio.h>
int main(){
	int k,l,s=0,stack[100001]={0},top=0;
	scanf("%d",&k);
	for(int d=0;d<k;d++){
		scanf("%d",&l);
		if(l==0){
			top--;
		}
		else{
			top++;
			stack[top]=l;
		}
	}
	for(int d=0;d<=top;d++){
		s=s+stack[d];
	}
	printf("%d",s);
}
