#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a[7][7]={0};
int c[7][7]={0};
int d[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
int f(int y, int x,int v){
	if(c[y][x]==0){
		a[y][x]=v;
		c[y][x]=1;
		for(int i=0 ; i<=3 ; i++){
			if(a[y+d[i][0]][x+d[i][1]]==1){
				f(y+d[i][0],x+d[i][1],v);
			}
		}
	}
}
int main(){
	srand((unsigned)time(NULL));
	int value=2;
	for(int i=1 ; i<=5 ; i++){
		for(int j=1 ;j<=5 ; j++){
			a[i][j]=rand()%2;
			
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(int i=1 ; i<=5 ; i++){
		for(int j=1 ; j<=5 ; j++){
			if(a[i][j]==1){
				f(i,j,value);
				value++;
			}
				
		}
	}
	printf("\n");
	for(int i=1 ; i<=5 ; i++){
		for(int j=1 ;j<=5 ; j++){
			
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

}
