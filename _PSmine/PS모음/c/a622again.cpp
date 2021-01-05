#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int s=0,e=9,i,j,a[10]={0},dummy,krri,ktx;
	srand((unsigned)time(NULL));
	for(i=0 ; i<=9 ; i++){
		a[i]=rand()%101;
		printf("%4d",a[i]);
	}
	printf("\n");
	for(i=0;i<9;i++){
		for(j=i+1;j<10;j++){
			if(a[i]>a[j]){
				dummy=a[i];
				a[i]=a[j];
				a[j]=dummy;
			}
		}
	}

	
	for(i=0 ; i<=9 ; i++){
		printf("%4d",a[i]);
	}
	printf("\n");
	scanf("%d",&ktx);
	while(s<=e){
		krri=(s+e)/2;
		if(ktx<a[krri]){
			e=krri-1;
		}
		else if(ktx>a[krri]){
			s=krri+1;
		}
		else if(ktx==a[krri]){
			break;
		}
	}
	if(ktx==a[krri]){
		printf("%d",1+krri);
	}
	else{
		printf("-1");
	}
}
