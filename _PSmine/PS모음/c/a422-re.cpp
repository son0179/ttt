#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int k=1,i,j,a[10]={0},r[10]={0};
	srand((unsigned)time(NULL));
	for(i=0 ; i<=9 ; i++){
		a[i]=rand()%101;
		printf("%4d",a[i]);
	}
	printf("\n");
	for(i=0 ; i<=9 ; i++){
		for(j=0;j<10;j++){
			
			if(a[i]>a[j]){
				k=k+1;
				
			}
		}
		r[i]=k;
		k=1;
				printf("%4d",r[i]);

	}
	
	
	
}
