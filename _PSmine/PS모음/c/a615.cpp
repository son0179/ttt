#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,j,a[10]={0},r,tik=1,s_i=0,e_i=9;
	int n=0,dummy,s_i_temp=0,e_i_temp=9;
	srand((unsigned)time(NULL));
	for(i=0 ; i<=9 ; i++){
		a[i]=rand()%101;
		printf("%4d",a[i]);
	}
	printf("\n");
	while(e_i-s_i>0){
		for(j=s_i;j<e_i;j++){
			if(a[j]>a[1+j]){
				dummy=a[j];
				a[j]=a[j+1];
				a[j+1]=dummy;
				e_i_temp=j;
			}
		}
		e_i=e_i_temp-1;
		for(j=e_i;j>=s_i;j--){
			if(a[j]>a[j+1]){
				dummy=a[j];
				a[j]=a[j+1];
				a[j+1]=dummy;
				s_i_temp=j;
			}
		}
		s_i=s_i_temp+1;
	}
		
	printf("\n");
	
	for(i=0 ; i<=9 ; i++){
		printf("%4d",a[i]);
	}
	
	
}
