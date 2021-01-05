#include<stdio.h>
int main(){
	int a[101]={0},i,j;
	
	for(i=1 ; i<101 ; i++){
		for(j=2 ; j<=i/2 ; j++){
			if(i%j==0){
				a[i]++;
			}
		}
	}
	for(i=1;i<101;i++){
		printf("%d : %d \n",i,a[i]+2);
	}
}
