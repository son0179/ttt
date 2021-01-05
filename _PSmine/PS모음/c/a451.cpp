#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,j,a[100]={0},r[11]={0},max_i=0,f;
	srand((unsigned)time(NULL));
	for(i=0 ; i<=99 ; i++){
		a[i]=rand()%11;
		r[a[i]]++;
	}
	for(f=0;f<11;f++){
		printf("%4d",f);
	}
	printf("\n");
	printf("%4d",r[0]);
	for(i=1;i<11;i++){
		printf("%4d",r[i]);
		if(r[max_i]<r[i]){
			max_i=i;
		}
	}
	printf("\n");
	printf("%d",max_i);
	
}
