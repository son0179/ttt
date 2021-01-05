#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,j=0,a[10]={0},r,f=0;
	srand((unsigned)time(NULL));
	for(i=0 ; i<=9 ; i++){
		a[i]=rand()%101;
		printf("%4d",a[i]);
	}
	printf("\n");
	scanf("%d",&j);
	
	for(r=0;r<10;r++){
		if(a[r]==j){
			printf("%d",r);
			f=1;
		}
		
	}
	if(f==0){
		printf("-1");
		
		
		
		
	}
	
	
}
