#include<stdio.h>
int main(){
	int n,i,j,a[101]={0};

	for(i=2;i<=100;i++){
		if(a[i]==0){
			for(j=2;i*j<=100;j++){
				a[i*j]=1;
			}
			printf("%d ",i);
		}
		
	}
}
