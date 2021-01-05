#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int min_i=0,sum=0,i,j,a[10]={0},mean,b,t[10]={0},r[10]={0};
	srand((unsigned)time(NULL));
	for(i=0 ; i<=9 ; i++){
		a[i]=rand()%101;
		printf("%4d",a[i]);
	}
	printf("\n");
	for(j=0;j<10;j++){
		sum=sum+a[j];
		
	}
	mean=sum/10;
	for(b=0;b<10;b++){
		if(mean<=a[b]){
			t[b]=a[b]-mean;
		}
		else{
			t[b]=mean-a[b];
		}	
	}
	for(i=1;i<=9;i++){
		if(t[i]<t[min_i]){
			min_i=i;
		}
	 
	}
	printf("%d\n%d",mean,a[min_i]);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
