#include<stdio.h>
int x,y;
int main(){
	scanf("%d %dX",&x,&y);
	for(int i=0;i<100000;i++){
		if(x*i/10==y){
			printf("%d",x*i%10);
			break;
		}
	}
}
