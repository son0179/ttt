#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,j=0,a[10]={0},r,f=0,e=9,n,s=0,m,tmp=0;
	srand((unsigned)time(NULL));
	for(i=0 ; i<=9 ; i++){
		a[i]=rand()%101;
		
	}
	for(n=0;n<9;n++){
		for(m=n+1;m<10;m++){
			if(a[n]>a[m]){
				tmp=a[n];
				a[n]=a[m];
				a[m]=tmp;	
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	scanf("\n%d",&i);
	while(s<=e&&f==0){
		m=(s+e)/2;
		if(a[m]>i){
			e=m-1;
		}
		if(a[m]<i){
			s=m+1;
		}
		if(a[m]==i){
			printf("%d",m+1);
			f=1;
		}
	}
	if(f==0){
		printf("-1");
	}
}
