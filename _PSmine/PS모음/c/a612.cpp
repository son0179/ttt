#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,j,a[10]={0},r,max_i=0,dummy;
	srand((unsigned)time(NULL));
	for(i=0 ; i<=9 ; i++){
		a[i]=rand()%101;
		printf("%4d",a[i]);
	}
	for(i=0;i<9;i++){
		for(j=0;j<9-i;j++){
			if(a[j]>a[1+j]){
				dummy=a[j];
				a[j]=a[j+1];
				a[j+1]=dummy;
			}
		}
	}
	printf("\n");
	
	for(i=0 ; i<=9 ; i++){
		printf("%4d",a[i]);
	}
	
	
}
