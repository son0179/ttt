#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,j,a[10]={0};
	int s=0, e=9, ch,tmp;
	srand((unsigned)time(NULL));
	for(i=0 ; i<=9 ; i++){
		a[i]=rand()%101;
		printf("%4d",a[i]);
	}
	printf("\n");
	do{
		ch=0;
		for(i=s ; i<e ; i++){
			if(a[i]>a[i+1]){
				tmp=a[i];
				a[i]=a[i+1];
				a[i+1]=tmp;
				ch=1;
			}	
		}
		if(ch==0){
			break;
		}
		ch=0;
		for(i=e ; i>=s+1 ; i--){
			if(a[i-1]>a[i]){
				tmp=a[i-1];
				a[i-1]=a[i];
				a[i]=tmp;
				ch=1;
			}
		}
	}while(ch!=0);
	for(i=0 ; i<=9 ; i++){
		printf("%d ",a[i]);		
	}
}
