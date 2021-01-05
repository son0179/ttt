#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int a[10]={0},n=0,b[7]={0},f;
	srand((unsigned)time(NULL));
	
	for(int i=0;i<=9;i++){
		a[i]=rand()%70;
		printf("%d ",a[i]);
		b[a[i]/10]++;
	}
	for(f=0;f<7;f++){
		printf("\n%d0~%d9 : %d",f,f,b[f]);
	}
	
	
}
