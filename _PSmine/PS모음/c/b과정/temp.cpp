#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,j,a[5][5];
	srand((unsigned)time(NULL));
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			a[i][j]=rand()%2;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("%d",a[5][0]);
		
	
	
		
}
