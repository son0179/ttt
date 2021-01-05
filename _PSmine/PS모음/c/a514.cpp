#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int a[10]={0},n=0,b[5]={0},f;
	srand((unsigned)time(NULL));
	for(int i=0;i<=9;i++){
		a[i]=rand()%4+1;
		printf("%d ",a[i]);
		b[a[i]]++;
	}
	for(f=1;f<5;f++){
		printf("\n%d %d",f,b[f]);
	}
}
