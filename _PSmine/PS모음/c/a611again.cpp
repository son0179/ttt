#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,j,a[10]={0};
	int r,max_i=0,dummy;
	srand((unsigned)time(NULL));
	for(i=0 ; i<=9 ; i++){
		a[i]=rand()%101;
		printf("%4d",a[i]);
	}
	for(i=0;i<9;i++){
		for(j=i+1;j<10;j++){
			if(a[i]>a[j]){
				dummy=a[i];
				a[i]=a[j];
				a[j]=dummy;
			}
		}
	}
	printf("\n");
	
	for(i=0 ; i<=9 ; i++){
		printf("%4d",a[i]);
	}
	
}
