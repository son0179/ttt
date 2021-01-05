#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int n=0,a[5][5]={0},c=1;
int f(int i,int j){
	if(c<=9){
	n=n+a[i][j];
	c++;
	if(a[i+1][j]>=a[i][j+1]){
		f(i+1,j);
	}
	else{
		f(i,j+1);
	}
	}
	
}

int main(){
	int i,j;
	srand((unsigned)time(NULL));
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			a[i][j]=rand()%9;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	f(0,0);
	printf("%d",n);
}
