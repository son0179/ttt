#include<stdio.h>
int main(){
	int n=0;
	int a[10]={1,4,7,14,2,9,10,8,9,15};
	int tmp=a[9];
	for(n=9;n>0;n--){
		a[n]=a[n-1];
	}
	a[0]=tmp;
	for(n=0;n<10;n++){
		printf("%d " ,a[n]);
	}
}
