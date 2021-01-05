#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,j,s,e,tmp,sc,m;
	int a[10]={0},f=-1;
	srand((unsigned)time(NULL));
	for(i=0 ; i<=9 ; i++){
		a[i]=rand()%15;
	}
	
	for(i=9; i>=1 ; i--){
		for(j=0 ; j<=i-1 ; j++){
			if(a[j]>a[j+1]){
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	for(i=0 ; i<=9 ; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	scanf("%d",&sc);
	s=0;
	e=9;
	while(s<e){
		m=(s+e)/2;
		if(sc<a[m]){
			e=m-1;
		}
		else if(sc>a[m]){
			s=m+1;
		}
		else{
			f=m;
			break;
		}
	}
	printf("%d",f);
}
