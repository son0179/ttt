#include<stdio.h>
int main(){
	int a[5][5]={0},n=1,k=0,x=0,y=0,i=0,j=0;
	int mm[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	for(x=5;x>0;x=x-2){
		for(k=0 ; k<=3 ; k++){
			for(y=1;y<x;y++){
				a[i][j]=n;
				n++;
				i=i+mm[k][0];
				j=j+mm[k][1];
			}
		}
		i++;
		j++;
	}
	
	
	
	
	for(i=0 ; i<=4 ; i++){
		for(j=0 ; j<=4 ; j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
