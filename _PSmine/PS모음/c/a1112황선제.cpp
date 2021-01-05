#include<stdio.h>
int main(){
	int a[10]={1,4,7,14,2,9,10,8,9,15};
	int tmp;
	int n;
	tmp=a[0];
	for(n=0;n<9;n++){
		a[n]=a[n+1];		
	}
    a[9]=tmp; 
    
    for(int i=0 ; i<=9 ; i++){
    	
    	printf("%d ",a[i]);
	}
	
} 
