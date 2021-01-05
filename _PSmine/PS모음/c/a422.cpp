#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,j,a[10]={0},r[10]={0};
	srand((unsigned)time(NULL));
	for(i=0 ; i<=9 ; i++){
		a[i]=rand()%1000+1;
		printf("%4d",a[i]);
	}
	printf("\n");
	for(i=0;i<=9;i++){
		for(j=0;j<=9;j++){
			if(i!=j){
				if(a[i]>a[j]){
					r[i]++;
				}
			}
		}
		printf("%4d",r[i]+1);
	}
	
	
	
}
