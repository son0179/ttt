#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a[5][5]={0};

int f(int n,int i, int j){
	a[i][j]=n; 
	if(i-1>=0 && a[i-1][j]==1){f(n,i-1,j);}
	if(i+1<=4 && a[i+1][j]==1){f(n,i+1,j);}
	if(j-1>=0 && a[i][j-1]==1){f(n,i,j-1);}
	if(j+1<=4 && a[i][j+1]==1){f(n,i,j+1);}
}
int main(){
	srand((unsigned)time(NULL));
	
	int i,j,n=2;
	for(i=0 ; i<=4 ; i++){
		for(j=0 ; j<=4 ; j++){
			a[i][j]=rand()%2;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0 ; i<=4 ; i++){
		for(j=0 ; j<=4 ; j++){
			if(a[i][j]==1){
				f(n,i,j);
				n++;
			}
		}
	}
	printf("\n");

	for(i=0 ; i<=4 ; i++){
		for(j=0 ; j<=4 ; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

}
