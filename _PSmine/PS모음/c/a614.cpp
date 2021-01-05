#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,j,k,l,a[10]={0},gap[3]={5,2,1},dummy;
	srand((unsigned)time(NULL));
	for(i=0 ; i<=9 ; i++){
		a[i]=rand()%101;
		printf("%4d",a[i]);
	}
	for(i=0;i<3;i++){
		for(j=0;j<gap[i];j++){
			for(k=1;k<10/gap[i];k++){
				for(l=gap[i]*k+j;l>0;l=l-gap[i]){
					if(a[l-gap[i]]>a[l]){
						dummy=a[l-gap[i]];
						a[l-gap[i]]=a[l];
						a[l]=dummy;
					}
					else{
						break;
					}
				}
			}
		}
	}
	
	
	
	printf("\n");
	
	for(i=0 ; i<=9 ; i++){
		printf("%4d",a[i]);
	}
	
	
}
