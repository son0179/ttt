#include<stdio.h>
int main(){
	int n,a[5][5],tik=1;
	int x=0,y=0;
	for(n=1 ; n<=25 ; n++){
		a[y][x]=n;
		if(n%5==0){
			y++;
			tik=tik*-1;
		}
		else{
			x=x+tik;
		}
	}
	for(int i=0 ; i<=4 ; i++){
		for(int j=0 ; j<=4 ; j++){
			printf("%3d ",a[i][j]);
		}
		printf("\n");
	}
}
