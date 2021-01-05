#include<stdio.h>
int main(){
	int n=1,i,j,a[5][5]={0};
	for(i=0;i<5;i++){
		if(i%2==0){
			for(j=0;j<5;j++){
				a[i][j]=n;
				n++;
			}
		}
		else{
			for(j=4;j>=0;j--){
				a[i][j]=n;
				n++;
			}
		}
		for(j=0;j<=4;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
