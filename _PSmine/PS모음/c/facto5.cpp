#include<stdio.h>
int main(){
	for(int i=100;i<1000;i++){
		if(i%3==1&&i%4==2&&i%10==0){
			printf("%d",i);
			break;
		}
	}
}
