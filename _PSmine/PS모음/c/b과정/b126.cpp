#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a[5][5]={0};
int f(int y , int x , int c){
	int r,d;
	if(c<=8){
		r=f(y,x+1,c+1);
		d=f(y+1,x,c+1);
		if(r>d){
			return r+a[y][x];
		}
		else{
			return d+a[y][x];
		}
	}
	else{
		return a[y][x];
	}
}
int main(){
	srand((unsigned)time(NULL));
	for(int i=0 ; i<=4 ; i++){
		for(int j=0 ; j<=4 ; j++){
			a[i][j]=rand()%3;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("%d",f(0,0,1));
}
