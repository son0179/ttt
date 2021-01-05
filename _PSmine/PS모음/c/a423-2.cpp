#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,a[100]={0},n=1;
	srand((unsigned)time(NULL));
	for(i=0 ; i<=9 ; i++){
		a[rand()%101]++;
	}
	
	
	for(i=0 ; i<=99 ;i++){
		if(a[i]>0){
			printf("%dµî , %d\n",n,i);
			n++;
		}
	}
}
