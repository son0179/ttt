#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	srand((unsigned)time(NULL));
	
	int a[10]={0},i,sum=0,aver,min=999,index;
	
	for(i=0 ; i<=9 ; i++){
		a[i]=rand()%31;
		printf("%d ",a[i]);
		sum=sum+a[i];
	}
	aver=sum/10;
	
	for(i=0 ; i<=9 ; i++){
		if(min>abs(a[i]-aver)){
			min=abs(a[i]-aver);
			index=i;
		}
	}
	printf("\naver=%d value=%d",aver,a[index]);
	
	
}
