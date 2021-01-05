#include<stdio.h>    //std io 의 약자 
int main(){
	/*
	int score;
	
	scanf("%d",&score);
	
	if(score>=60){
		printf("합격");
	}
	else{
		printf("불합격");
	}*/
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	
	if(n1>n2){
		printf("%d %d",n2,n1);
	}
	else{
		printf("%d %d",n1,n2);
	}
	
	
}
