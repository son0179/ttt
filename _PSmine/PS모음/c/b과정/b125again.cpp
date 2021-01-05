#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a[5][5]={0};
int f(int i,int j,int n){
	a[i][j]=n;
	if(i>0&&a[i-1][j]==1){f(i-1,j,n);}
	if(i<4&&a[i+1][j]==1){f(i+1,j,n);}
	if(j>0&&a[i][j-1]==1){f(i,j-1,n);}
	if(j<4&&a[i][j+1]==1){f(i,j+1,n);}
}

int main(){
	int n=2,i,j;
	srand((unsigned)time(NULL));
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			a[i][j]=rand()%2;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(a[i][j]==1){
				f(i,j,n);
				n++;
			}
		}
	}
	printf("\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",a[i][j]);	
		
		
		}
		printf("\n");
			
	}
		
}
