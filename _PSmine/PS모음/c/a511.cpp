#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand((unsigned)time(NULL));
	
	int a[5][5],i,j;
	for(i=0 ; i<=4 ; i++){
		for(j=0 ; j<=4 ; j++){
			a[i][j]=rand()%2;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("----------\n");
	for(i=0 ; i<=4 ; i++){
		for(j=0 ; j<=4 ; j++){
			a[i][j]=1-a[i][j];
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}
